	THUMB_FUNC_START sub_0809722C
sub_0809722C: @ 0x0809722C
	push {r4,lr}
	ldr r1, _0809726C  @ =gRam
	ldr r2, _08097270  @ =0x000017CE
	add r0, r1, r2
	ldrb r2, [r0]
	add r3, r1, #0
	cmp r2, #0
	beq _080972DE
	ldr r4, _08097274  @ =0x00001705
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _080972DE
	ldr r1, _08097278  @ =0x0000172A
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08097290
	add r4, r4, #39
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809727C
	lsl r0, r0, #1
	mov r2, #4
	neg r2, r2
	add r1, r2, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	b _080972A2
	.byte 0x00
	.byte 0x00
_0809726C:
	.4byte gRam
_08097270:
	.4byte 0x000017CE
_08097274:
	.4byte 0x00001705
_08097278:
	.4byte 0x0000172A
_0809727C:
	ldr r1, _080972BC  @ =gUnknown_08167DB2
	ldr r4, _080972C0  @ =0x000016D5
	add r0, r3, r4
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	and r0, r0, r2
	cmp r0, #0
	bne _080972DE
_08097290:
	mov r2, #4
	ldr r1, _080972C4  @ =0x000017CE
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	cmp r0, #0
	beq _080972A2
	mov r2, #0
_080972A2:
	cmp r2, #4
	beq _080972C8
	ldr r4, _080972C4  @ =0x000017CE
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _080972D8
	add r0, r2, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	b _080972D8
_080972BC:
	.4byte gUnknown_08167DB2
_080972C0:
	.4byte 0x000016D5
_080972C4:
	.4byte 0x000017CE
_080972C8:
	ldr r1, _080972E4  @ =0x000017CE
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080972D8
	mov r2, #6
_080972D8:
	ldr r4, _080972E8  @ =0x000016D5
	add r0, r3, r4
	strb r2, [r0]
_080972DE:
	pop {r4}
	pop {r0}
	bx r0
_080972E4:
	.4byte 0x000017CE
_080972E8:
	.4byte 0x000016D5
	THUMB_FUNC_END sub_0809722C

