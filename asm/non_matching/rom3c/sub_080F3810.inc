	THUMB_FUNC_START sub_080F3810
sub_080F3810: @ 0x080F3810
	push {r4,r5,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080F384C  @ =gRam
	ldr r0, _080F3850  @ =0x00001608
	add r1, r5, r0
	mov r0, #148
	lsl r0, r0, #4
	strh r0, [r1]
	ldr r0, _080F3854  @ =0x0000160C
	add r1, r5, r0
	ldr r0, _080F3858  @ =0x0000215A
	strh r0, [r1]
	add r0, r4, #0
	mov r1, #34
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080F385C  @ =0x00000F52
	add r5, r5, r0
	add r4, r4, r5
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080F384C:
	.4byte gRam
_080F3850:
	.4byte 0x00001608
_080F3854:
	.4byte 0x0000160C
_080F3858:
	.4byte 0x0000215A
_080F385C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F3810

