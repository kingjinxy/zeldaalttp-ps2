	THUMB_FUNC_START sub_080E2094
sub_080E2094: @ 0x080E2094
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E20F0  @ =gRam
	ldr r1, _080E20F4  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r1, r4, r1
	ldr r2, _080E20F8  @ =0x0000097D
	add r6, r5, r2
	strb r1, [r6]
	mov r0, #3
	and r1, r1, r0
	ldr r7, _080E20FC  @ =0x000010D2
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	bne _080E20E8
	ldr r1, _080E2100  @ =0x00001092
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r2, r1, #1
	strb r2, [r0]
	mov r3, #31
	ldr r2, _080E2104  @ =gUnknown_081769D0
	ldr r7, _080E2108  @ =0x00000FB2
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	and r1, r1, r3
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #63
	and r1, r1, r0
	strb r1, [r6]
	add r0, r4, #0
	bl sub_080E210C
_080E20E8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E20F0:
	.4byte gRam
_080E20F4:
	.4byte 0x00000996
_080E20F8:
	.4byte 0x0000097D
_080E20FC:
	.4byte 0x000010D2
_080E2100:
	.4byte 0x00001092
_080E2104:
	.4byte gUnknown_081769D0
_080E2108:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E2094

