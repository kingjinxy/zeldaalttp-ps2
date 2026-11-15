	THUMB_FUNC_START sub_080E86D8
sub_080E86D8: @ 0x080E86D8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _080E8708  @ =gRam
	ldr r0, _080E870C  @ =0x00001172
	add r1, r4, r0
	add r1, r3, r1
	ldr r2, _080E8710  @ =0x00000FC2
	add r0, r4, r2
	add r2, r3, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E871C
	ldr r2, _080E8714  @ =0x00000F92
	add r1, r4, r2
	add r1, r3, r1
	ldr r2, _080E8718  @ =gUnknown_08177948
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	b _080E8738
_080E8708:
	.4byte gRam
_080E870C:
	.4byte 0x00001172
_080E8710:
	.4byte 0x00000FC2
_080E8714:
	.4byte 0x00000F92
_080E8718:
	.4byte gUnknown_08177948
_080E871C:
	ldr r0, _080E8740  @ =0x00000F52
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #127
	strb r0, [r2]
	ldr r2, _080E8744  @ =0x00001032
	add r1, r4, r2
	add r1, r3, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
_080E8738:
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_080E8740:
	.4byte 0x00000F52
_080E8744:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080E86D8

