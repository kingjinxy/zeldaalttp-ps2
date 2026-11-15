	THUMB_FUNC_START sub_08085978
sub_08085978: @ 0x08085978
	push {r4-r7,lr}
	ldr r0, _080859AC  @ =gRam
	ldr r1, _080859B0  @ =0x00000AF4
	add r2, r0, r1
	ldrh r1, [r2]
	add r7, r0, #0
	cmp r1, #0
	beq _080859DC
	mov r4, #0
	mov r6, #16
	mov r12, r2
	ldr r3, _080859B4  @ =0x00000C32
	add r5, r7, r3
_08085992:
	ldrh r2, [r5]
	ldr r0, _080859B8  @ =gUnknown_0200CBA0
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #128
	bne _080859C0
	orr r1, r1, r6
	strb r1, [r3]
	ldr r3, _080859BC  @ =gUnknown_0200CBE0
	b _080859CC
	.byte 0x00
	.byte 0x00
_080859AC:
	.4byte gRam
_080859B0:
	.4byte 0x00000AF4
_080859B4:
	.4byte 0x00000C32
_080859B8:
	.4byte gUnknown_0200CBA0
_080859BC:
	.4byte gUnknown_0200CBE0
_080859C0:
	ldr r1, _08085A08  @ =gUnknown_0200DBA0
	add r0, r2, r1
	ldrb r1, [r0]
	orr r1, r1, r6
	strb r1, [r0]
	ldr r3, _08085A0C  @ =gUnknown_0200DBE0
_080859CC:
	add r0, r2, r3
	strb r1, [r0]
	add r5, r5, #2
	add r4, r4, #1
	mov r0, r12
	ldrh r0, [r0]
	cmp r4, r0
	bne _08085992
_080859DC:
	ldr r3, _08085A10  @ =0x00000AF6
	add r1, r7, r3
	ldrh r0, [r1]
	cmp r0, #0
	beq _08085A3C
	mov r4, #0
	mov r6, #32
	mov r12, r1
	ldr r0, _08085A14  @ =0x00000C42
	add r5, r7, r0
_080859F0:
	ldrh r2, [r5]
	ldr r1, _08085A18  @ =gUnknown_0200CBA0
	add r3, r2, r1
	ldrb r1, [r3]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #128
	bne _08085A20
	orr r1, r1, r6
	strb r1, [r3]
	ldr r3, _08085A1C  @ =gUnknown_0200CBE0
	b _08085A2C
_08085A08:
	.4byte gUnknown_0200DBA0
_08085A0C:
	.4byte gUnknown_0200DBE0
_08085A10:
	.4byte 0x00000AF6
_08085A14:
	.4byte 0x00000C42
_08085A18:
	.4byte gUnknown_0200CBA0
_08085A1C:
	.4byte gUnknown_0200CBE0
_08085A20:
	ldr r1, _08085A44  @ =gUnknown_0200DBA0
	add r0, r2, r1
	ldrb r1, [r0]
	orr r1, r1, r6
	strb r1, [r0]
	ldr r3, _08085A48  @ =gUnknown_0200DBE0
_08085A2C:
	add r0, r2, r3
	strb r1, [r0]
	add r5, r5, #2
	add r4, r4, #1
	mov r0, r12
	ldrh r0, [r0]
	cmp r4, r0
	bne _080859F0
_08085A3C:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08085A44:
	.4byte gUnknown_0200DBA0
_08085A48:
	.4byte gUnknown_0200DBE0
	THUMB_FUNC_END sub_08085978

