	THUMB_FUNC_START sub_08097024
sub_08097024: @ 0x08097024
	push {r4-r6,lr}
	ldr r0, _0809703C  @ =gRam
	ldr r2, _08097040  @ =0x00001804
	add r1, r0, r2
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #0
	beq _08097044
	bl sub_08096E4C
	b _08097226
	.byte 0x00
	.byte 0x00
_0809703C:
	.4byte gRam
_08097040:
	.4byte 0x00001804
_08097044:
	ldr r1, _0809705C  @ =0x000016D5
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r2, r0, #1
	add r1, r1, #68
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #6
	bne _08097060
	add r2, r2, #4
	b _0809707E
	.byte 0x00
	.byte 0x00
_0809705C:
	.4byte 0x000016D5
_08097060:
	ldr r1, _080970C0  @ =0x000017DA
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809707E
	ldr r1, _080970C4  @ =0x00000545
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _08097132
	add r0, r2, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
_0809707E:
	add r3, r5, #0
	ldr r1, _080970C8  @ =0x00001718
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #23
	bne _0809708C
	b _080971CC
_0809708C:
	ldr r1, _080970CC  @ =0x000009AD
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #15
	beq _080970EC
	sub r0, r0, #19
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _080970BC
	ldr r1, _080970D0  @ =0x00001791
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080970EC
	ldr r1, _080970D4  @ =0x000016FA
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #141
	and r0, r0, r1
	cmp r0, #0
	beq _080970D8
_080970BC:
	mov r2, #12
	b _080970EC
_080970C0:
	.4byte 0x000017DA
_080970C4:
	.4byte 0x00000545
_080970C8:
	.4byte 0x00001718
_080970CC:
	.4byte 0x000009AD
_080970D0:
	.4byte 0x00001791
_080970D4:
	.4byte 0x000016FA
_080970D8:
	ldr r1, _0809713C  @ =0x000017E1
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080970EC
	sub r1, r1, #247
	add r0, r3, r1
	ldrb r6, [r0]
	cmp r6, #0
	beq _08097150
_080970EC:
	ldr r0, _08097140  @ =0x000016D4
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #5
	bhi _08097132
	ldr r1, _08097144  @ =0x00001783
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #2
	beq _08097132
	ldr r0, _08097148  @ =gUnknown_08167DB6
	add r0, r2, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r2, r5, r1
	strb r0, [r2]
	ldr r0, _0809714C  @ =0x000016D3
	add r3, r5, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldrb r1, [r3]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r1, r0
	bge _08097124
	b _08097226
_08097124:
	mov r0, #0
	strb r0, [r3]
	ldrb r0, [r4]
	add r0, r0, #1
	cmp r0, #6
	beq _08097132
	b _08097224
_08097132:
	ldr r2, _08097140  @ =0x000016D4
	add r1, r5, r2
	mov r0, #0
	strb r0, [r1]
	b _08097226
_0809713C:
	.4byte 0x000017E1
_08097140:
	.4byte 0x000016D4
_08097144:
	.4byte 0x00001783
_08097148:
	.4byte gUnknown_08167DB6
_0809714C:
	.4byte 0x000016D3
_08097150:
	ldr r0, _080971B4  @ =0x000016D4
	add r4, r3, r0
	ldrb r2, [r4]
	ldr r1, _080971B8  @ =0x00001719
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #6
	bne _08097168
	add r0, r2, #0
	add r0, r0, #8
	lsl r0, r0, #24
	lsr r2, r0, #24
_08097168:
	ldr r1, _080971BC  @ =0x000017DA
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809717A
	add r0, r2, #0
	add r0, r0, #8
	lsl r0, r0, #24
	lsr r2, r0, #24
_0809717A:
	ldr r1, _080971C0  @ =0x00001783
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #2
	beq _08097226
	ldr r0, _080971C4  @ =gUnknown_08167DC6
	add r0, r2, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r2, r3, r1
	strb r0, [r2]
	ldr r0, _080971C8  @ =0x000016D3
	add r3, r3, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldrb r1, [r3]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r1, r0
	blt _08097226
	strb r6, [r3]
	ldrb r0, [r4]
	add r0, r0, #1
	cmp r0, #9
	bne _08097224
	mov r0, #1
	b _08097224
_080971B4:
	.4byte 0x000016D4
_080971B8:
	.4byte 0x00001719
_080971BC:
	.4byte 0x000017DA
_080971C0:
	.4byte 0x00001783
_080971C4:
	.4byte gUnknown_08167DC6
_080971C8:
	.4byte 0x000016D3
_080971CC:
	ldr r1, _080971E4  @ =0x000016D4
	add r4, r3, r1
	ldrb r0, [r4]
	cmp r0, #3
	bhi _080971E0
	add r1, r1, #175
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _080971E8
_080971E0:
	mov r0, #0
	b _08097224
_080971E4:
	.4byte 0x000016D4
_080971E8:
	ldr r0, _0809721C  @ =gUnknown_08167DB6
	add r0, r2, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r2, r5, r1
	mov r6, #0
	strb r0, [r2]
	ldr r0, _08097220  @ =0x000016D3
	add r3, r5, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldrb r1, [r3]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r1, r0
	blt _08097226
	strb r6, [r3]
	ldrb r0, [r4]
	add r0, r0, #1
	cmp r0, #4
	bne _08097224
	strb r6, [r4]
	b _08097226
	.byte 0x00
	.byte 0x00
_0809721C:
	.4byte gUnknown_08167DB6
_08097220:
	.4byte 0x000016D3
_08097224:
	strb r0, [r4]
_08097226:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08097024

