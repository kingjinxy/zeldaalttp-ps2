	THUMB_FUNC_START sub_080CD618
sub_080CD618: @ 0x080CD618
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080CD664  @ =gRam
	ldr r1, _080CD668  @ =0x000015DD
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _080CD66C  @ =0x000011D2
	add r0, r3, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080CD70E
	cmp r0, #5
	beq _080CD648
	ldr r1, _080CD670  @ =0x000009AD
	add r0, r3, r1
	ldr r2, _080CD674  @ =0x00001605
	add r1, r3, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080CD67C
_080CD648:
	ldr r1, _080CD678  @ =0x000012FE
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080CD67C
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _080CD67C
	strb r0, [r5]
	b _080CD70E
_080CD664:
	.4byte gRam
_080CD668:
	.4byte 0x000015DD
_080CD66C:
	.4byte 0x000011D2
_080CD670:
	.4byte 0x000009AD
_080CD674:
	.4byte 0x00001605
_080CD678:
	.4byte 0x000012FE
_080CD67C:
	ldr r1, _080CD6AC  @ =gRam
	ldr r2, _080CD6B0  @ =0x000015F7
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CD6E0
	ldr r2, _080CD6B4  @ =0x00001358
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CD6C0
	ldr r2, _080CD6B8  @ =0x000011D2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080CD6BC  @ =gUnknown_08172B60
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_080CF3E8
	b _080CD6F4
	.byte 0x00
	.byte 0x00
_080CD6AC:
	.4byte gRam
_080CD6B0:
	.4byte 0x000015F7
_080CD6B4:
	.4byte 0x00001358
_080CD6B8:
	.4byte 0x000011D2
_080CD6BC:
	.4byte gUnknown_08172B60
_080CD6C0:
	ldr r2, _080CD6D8  @ =0x000011D2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080CD6DC  @ =gUnknown_08172B60
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_080CF3B8
	b _080CD6F4
	.byte 0x00
	.byte 0x00
_080CD6D8:
	.4byte 0x000011D2
_080CD6DC:
	.4byte gUnknown_08172B60
_080CD6E0:
	ldr r2, _080CD714  @ =0x000011D2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r1, _080CD718  @ =gUnknown_08172B60
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	bl sub_080CF370
_080CD6F4:
	ldr r1, _080CD71C  @ =gUnknown_08172B78
	ldr r0, _080CD720  @ =gRam
	ldr r2, _080CD714  @ =0x000011D2
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080CD70E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080CD714:
	.4byte 0x000011D2
_080CD718:
	.4byte gUnknown_08172B60
_080CD71C:
	.4byte gUnknown_08172B78
_080CD720:
	.4byte gRam
	THUMB_FUNC_END sub_080CD618

