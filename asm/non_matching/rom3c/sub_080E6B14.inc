	THUMB_FUNC_START sub_080E6B14
sub_080E6B14: @ 0x080E6B14
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E6B74  @ =gRam
	ldr r0, _080E6B78  @ =0x00001022
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080E6B7C  @ =gUnknown_0817776C
	ldr r0, _080E6B80  @ =0x0000164C
	add r3, r5, r0
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _080E6B84  @ =0x00000EA5
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080E6B88  @ =gUnknown_0817776E
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	bl GetRandomInt
	ldr r2, _080E6B8C  @ =0x00000FC2
	add r1, r5, r2
	add r3, r4, r1
	mov r1, #127
	and r1, r1, r0
	strb r1, [r3]
	ldr r1, _080E6B90  @ =0x000009AC
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #26
	bne _080E6B6E
	ldr r0, _080E6B94  @ =0x00000FB2
	add r2, r5, r0
	add r2, r4, r2
	mov r0, #1
	and r0, r0, r4
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #63
	strb r0, [r3]
_080E6B6E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080E6B74:
	.4byte gRam
_080E6B78:
	.4byte 0x00001022
_080E6B7C:
	.4byte gUnknown_0817776C
_080E6B80:
	.4byte 0x0000164C
_080E6B84:
	.4byte 0x00000EA5
_080E6B88:
	.4byte gUnknown_0817776E
_080E6B8C:
	.4byte 0x00000FC2
_080E6B90:
	.4byte 0x000009AC
_080E6B94:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E6B14

