	THUMB_FUNC_START sub_080BE560
sub_080BE560: @ 0x080BE560
	push {r4,r5,lr}
	ldr r0, _080BE584  @ =gRam
	ldr r1, _080BE588  @ =0x0000098F
	add r4, r0, r1
	ldrb r0, [r4]
	cmp r0, #0
	bne _080BE594
	ldr r1, _080BE58C  @ =gUnknown_03003E48
	mov r0, #2
	bl sub_080679CC
	lsl r0, r0, #16
	cmp r0, #0
	beq _080BE590
	bl sub_080698FC
	b _080BE594
	.byte 0x00
	.byte 0x00
_080BE584:
	.4byte gRam
_080BE588:
	.4byte 0x0000098F
_080BE58C:
	.4byte gUnknown_03003E48
_080BE590:
	mov r0, #1
	strb r0, [r4]
_080BE594:
	ldr r4, _080BE5DC  @ =0x04000208
	mov r0, #0
	strh r0, [r4]
	ldr r1, _080BE5E0  @ =0x040000DC
	mov r0, #0
	str r0, [r1]
	bl sub_0812A90C
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #4]
	ldr r1, _080BE5E4  @ =gUnknown_02002000
	bl sub_08067A04
	lsl r0, r0, #24
	lsr r5, r0, #24
	bl sub_0812A958
	mov r0, #1
	strh r0, [r4]
	ldr r0, _080BE5E8  @ =gUnknown_0200247F
	ldrb r0, [r0]
	cmp r0, #1
	beq _080BE5C6
	mov r5, #0
_080BE5C6:
	lsl r0, r5, #24
	asr r4, r0, #24
	cmp r4, #0
	beq _080BE5F0
	mov r0, #1
	neg r0, r0
	cmp r4, r0
	beq _080BE5EC
	mov r0, #0
	b _080BE5F4
	.byte 0x00
	.byte 0x00
_080BE5DC:
	.4byte 0x04000208
_080BE5E0:
	.4byte 0x040000DC
_080BE5E4:
	.4byte gUnknown_02002000
_080BE5E8:
	.4byte gUnknown_0200247F
_080BE5EC:
	bl sub_080698FC
_080BE5F0:
	mov r0, #1
	neg r0, r0
_080BE5F4:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080BE560

	.byte 0x00
	.byte 0x00
