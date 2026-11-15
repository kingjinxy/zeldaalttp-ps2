	THUMB_FUNC_START sub_080E56C8
sub_080E56C8: @ 0x080E56C8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E5708  @ =gRam
	ldr r0, _080E570C  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #160
	bne _080E5702
	ldr r0, _080E5710  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #100
	bl sub_080CF140
	ldr r1, _080E5714  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
_080E5702:
	pop {r4,r5}
	pop {r0}
	bx r0
_080E5708:
	.4byte gRam
_080E570C:
	.4byte 0x00001052
_080E5710:
	.4byte 0x00000F52
_080E5714:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E56C8

