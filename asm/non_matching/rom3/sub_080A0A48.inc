	THUMB_FUNC_START sub_080A0A48
sub_080A0A48: @ 0x080A0A48
	push {r4,lr}
	bl sub_0809FFE8
	ldr r3, _080A0A84  @ =gRam
	ldr r0, _080A0A88  @ =0x0000177C
	add r4, r3, r0
	ldr r1, _080A0A8C  @ =0x00000974
	add r0, r3, r1
	ldrb r1, [r0]
	lsl r1, r1, #8
	mov r2, #0
	ldrsh r0, [r0, r2]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r4]
	orr r1, r1, r0
	mov r2, #0
	strh r1, [r4]
	ldr r1, _080A0A90  @ =0x00001721
	add r0, r3, r1
	strb r2, [r0]
	ldr r0, _080A0A94  @ =0x00001722
	add r3, r3, r0
	strb r2, [r3]
	pop {r4}
	pop {r0}
	bx r0
_080A0A84:
	.4byte gRam
_080A0A88:
	.4byte 0x0000177C
_080A0A8C:
	.4byte 0x00000974
_080A0A90:
	.4byte 0x00001721
_080A0A94:
	.4byte 0x00001722
	THUMB_FUNC_END sub_080A0A48

