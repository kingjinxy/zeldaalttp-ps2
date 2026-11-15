	THUMB_FUNC_START sub_08079844
sub_08079844: @ 0x08079844
	push {r4-r7,lr}
	ldr r4, _0807987C  @ =gRam
	ldr r1, _08079880  @ =0x0000097C
	add r7, r4, r1
	strh r0, [r7]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #8
	bne _08079872
	ldrh r6, [r7]
	add r0, r6, #2
	strh r0, [r7]
	mov r0, #150
	lsl r0, r0, #4
	add r4, r4, r0
	ldrh r5, [r4]
	add r0, r5, #0
	add r0, r0, #16
	strh r0, [r4]
	bl sub_080795F0
	strh r5, [r4]
	strh r6, [r7]
_08079872:
	bl sub_080795F0
	pop {r4-r7}
	pop {r0}
	bx r0
_0807987C:
	.4byte gRam
_08079880:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_08079844

