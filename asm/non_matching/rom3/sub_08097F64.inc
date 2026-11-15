	THUMB_FUNC_START sub_08097F64
sub_08097F64: @ 0x08097F64
	push {r4-r6,lr}
	ldr r5, _08097FA4  @ =gRam
	ldr r1, _08097FA8  @ =0x00001702
	add r0, r5, r1
	ldrb r1, [r0]
	cmp r1, #0
	beq _08097FC0
	ldr r2, _08097FAC  @ =0x00001718
	add r1, r5, r2
	mov r4, #0
	mov r0, #2
	strb r0, [r1]
	ldr r3, _08097FB0  @ =0x000016C9
	add r0, r5, r3
	strb r4, [r0]
	bl sub_08092B0C
	ldr r1, _08097FB4  @ =0x000017B6
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _08097FB8  @ =0x000017DF
	add r0, r5, r2
	strb r4, [r0]
	ldr r3, _08097FBC  @ =0x00001705
	add r2, r5, r3
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	bl sub_08099C90
	b _080981A0
_08097FA4:
	.4byte gRam
_08097FA8:
	.4byte 0x00001702
_08097FAC:
	.4byte 0x00001718
_08097FB0:
	.4byte 0x000016C9
_08097FB4:
	.4byte 0x000017B6
_08097FB8:
	.4byte 0x000017DF
_08097FBC:
	.4byte 0x00001705
_08097FC0:
	ldr r2, _08098024  @ =0x000016E8
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _08098028  @ =0x000016EA
	add r0, r5, r3
	strb r1, [r0]
	add r2, r2, #81
	add r0, r5, r2
	strb r1, [r0]
	add r3, r3, #167
	add r0, r5, r3
	strb r1, [r0]
	add r2, r2, #89
	add r0, r5, r2
	strb r1, [r0]
	ldr r0, _0809802C  @ =gFlippers
	ldrb r0, [r0]
	cmp r0, #0
	bne _08097FE8
	b _080981A0
_08097FE8:
	sub r3, r3, #108
	add r2, r5, r3
	ldrb r0, [r2]
	cmp r0, #0
	bne _08098038
	ldr r0, _08098030  @ =0x000016EB
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08098006
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0809804A
_08098006:
	ldr r1, _08098034  @ =0x00000547
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0809804A
	mov r0, #32
	strb r0, [r2]
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
	b _0809804A
	.byte 0x00
	.byte 0x00
_08098024:
	.4byte 0x000016E8
_08098028:
	.4byte 0x000016EA
_0809802C:
	.4byte gFlippers
_08098030:
	.4byte 0x000016EB
_08098034:
	.4byte 0x00000547
_08098038:
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0809804A
	ldr r2, _080980B0  @ =0x000016EB
	add r1, r5, r2
	mov r0, #64
	strb r0, [r1]
_0809804A:
	ldr r1, _080980B4  @ =gRam
	ldr r3, _080980B8  @ =0x000017CA
	add r0, r1, r3
	add r3, r3, #2
	add r2, r1, r3
	ldrh r3, [r0]
	ldrh r0, [r2]
	orr r0, r0, r3
	add r6, r1, #0
	cmp r0, #0
	bne _080980D0
	ldr r1, _080980BC  @ =0x000017B8
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #2
	beq _08098078
	ldr r2, _080980C0  @ =0x000017BA
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #2
	beq _08098078
	bl sub_08092B0C
_08098078:
	ldr r1, _080980B4  @ =gRam
	ldr r3, _080980C4  @ =0x000016D4
	add r2, r1, r3
	ldrb r0, [r2]
	mov r4, #1
	and r4, r4, r0
	mov r5, #0
	strb r4, [r2]
	ldr r0, _080980C8  @ =0x000016D3
	add r3, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r6, r1, #0
	cmp r0, #15
	bls _08098102
	strb r5, [r3]
	ldr r1, _080980CC  @ =0x00001751
	add r0, r6, r1
	strb r5, [r0]
	add r0, r4, #0
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
	b _08098102
	.byte 0x00
	.byte 0x00
_080980B0:
	.4byte 0x000016EB
_080980B4:
	.4byte gRam
_080980B8:
	.4byte 0x000017CA
_080980BC:
	.4byte 0x000017B8
_080980C0:
	.4byte 0x000017BA
_080980C4:
	.4byte 0x000016D4
_080980C8:
	.4byte 0x000016D3
_080980CC:
	.4byte 0x00001751
_080980D0:
	ldr r2, _080981A8  @ =0x000016D3
	add r1, r6, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bls _08098102
	mov r0, #0
	strb r0, [r1]
	ldr r3, _080981AC  @ =0x000016D4
	add r2, r6, r3
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080981B0  @ =gUnknown_08167E0A
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _080981B4  @ =0x00001751
	add r0, r6, r2
	strb r1, [r0]
_08098102:
	add r4, r6, #0
	ldr r3, _080981B8  @ =0x000017DF
	add r5, r4, r3
	ldrb r0, [r5]
	cmp r0, #0
	bne _0809816A
	ldr r1, _080981BC  @ =0x000017CA
	add r0, r4, r1
	ldr r2, _080981C0  @ =0x000017CC
	add r1, r4, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _0809819C
	ldr r3, _080981C4  @ =0x00000546
	add r0, r4, r3
	ldrb r0, [r0]
	mov r1, #128
	and r1, r1, r0
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	mov r2, #64
	neg r2, r2
	add r0, r2, #0
	and r1, r1, r0
	cmp r1, #0
	beq _0809819C
	strb r1, [r5]
	mov r0, #22
	bl sub_0809E43C
	mov r0, #26
	mov r1, #1
	bl sub_080BEA28
	ldr r3, _080981C8  @ =0x000017B6
	add r1, r4, r3
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080981CC  @ =0x00001750
	add r1, r4, r0
	mov r0, #7
	strb r0, [r1]
	bl sub_08097C40
_0809816A:
	ldr r2, _080981CC  @ =0x00001750
	add r1, r6, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809819C
	mov r0, #7
	strb r0, [r1]
	ldr r3, _080981C8  @ =0x000017B6
	add r1, r6, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #5
	bne _0809819C
	mov r0, #0
	strb r0, [r1]
	ldrb r1, [r5]
	mov r0, #63
	and r0, r0, r1
	strb r0, [r5]
_0809819C:
	bl sub_080981D0
_080981A0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080981A8:
	.4byte 0x000016D3
_080981AC:
	.4byte 0x000016D4
_080981B0:
	.4byte gUnknown_08167E0A
_080981B4:
	.4byte 0x00001751
_080981B8:
	.4byte 0x000017DF
_080981BC:
	.4byte 0x000017CA
_080981C0:
	.4byte 0x000017CC
_080981C4:
	.4byte 0x00000546
_080981C8:
	.4byte 0x000017B6
_080981CC:
	.4byte 0x00001750
	THUMB_FUNC_END sub_08097F64

