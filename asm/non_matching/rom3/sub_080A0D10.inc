	THUMB_FUNC_START sub_080A0D10
sub_080A0D10: @ 0x080A0D10
	push {r4-r6,lr}
	ldr r3, _080A0DE8  @ =gRam
	ldr r1, _080A0DEC  @ =0x00001783
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A0DE0
	ldr r2, _080A0DF0  @ =0x0000179E
	add r0, r3, r2
	ldr r4, _080A0DF4  @ =0x0000177A
	add r1, r3, r4
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r4, r0, #0
	orr r4, r4, r2
	cmp r4, #0
	bne _080A0DE0
	ldr r0, _080A0DF8  @ =0x00001791
	add r5, r3, r0
	mov r0, #0
	ldrsb r0, [r5, r0]
	cmp r0, #0
	blt _080A0DE0
	ldr r1, _080A0DFC  @ =0x000016E9
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _080A0E00  @ =0x00001806
	add r1, r3, r2
	mov r0, #29
	strb r0, [r1]
	ldr r1, _080A0E04  @ =0x0000177F
	add r0, r3, r1
	mov r6, #64
	strb r6, [r0]
	sub r2, r2, #238
	add r1, r3, r2
	mov r0, #17
	strb r0, [r1]
	ldr r0, _080A0E08  @ =0x00001804
	add r1, r3, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080A0E0C  @ =0x000016E8
	add r2, r3, r1
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	strb r0, [r2]
	strb r4, [r5]
	ldr r2, _080A0E10  @ =0x0000178A
	add r0, r3, r2
	strb r4, [r0]
	ldr r1, _080A0E14  @ =0x000016FA
	add r0, r3, r1
	strb r4, [r0]
	sub r2, r2, #95
	add r0, r3, r2
	strb r4, [r0]
	sub r1, r1, #151
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r0, _080A0E18  @ =gUnknown_08167E51
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r1, r0
	bne _080A0DE0
	sub r2, r2, #18
	add r0, r3, r2
	strb r4, [r0]
	ldr r4, _080A0E1C  @ =0x00001754
	add r0, r3, r4
	ldrb r2, [r0]
	ldr r1, _080A0E20  @ =gUnknown_0200EBB4
	add r0, r2, r1
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r4, _080A0E24  @ =gUnknown_0200EBA0
	add r0, r2, r4
	ldrb r0, [r0]
	add r0, r0, r1
	ldr r4, _080A0E28  @ =0x00001664
	add r1, r3, r4
	strh r0, [r1]
	ldr r1, _080A0E2C  @ =gUnknown_0200EBDC
	add r0, r2, r1
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r4, _080A0E30  @ =gUnknown_0200EBC8
	add r2, r2, r4
	ldrb r0, [r2]
	add r0, r0, r1
	ldr r2, _080A0E34  @ =0x00001666
	add r1, r3, r2
	strh r0, [r1]
	mov r4, #161
	lsl r4, r4, #4
	add r0, r3, r4
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r3, r2
	strb r1, [r0]
	ldr r4, _080A0E38  @ =0x00001757
	add r0, r3, r4
	strb r6, [r0]
_080A0DE0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A0DE8:
	.4byte gRam
_080A0DEC:
	.4byte 0x00001783
_080A0DF0:
	.4byte 0x0000179E
_080A0DF4:
	.4byte 0x0000177A
_080A0DF8:
	.4byte 0x00001791
_080A0DFC:
	.4byte 0x000016E9
_080A0E00:
	.4byte 0x00001806
_080A0E04:
	.4byte 0x0000177F
_080A0E08:
	.4byte 0x00001804
_080A0E0C:
	.4byte 0x000016E8
_080A0E10:
	.4byte 0x0000178A
_080A0E14:
	.4byte 0x000016FA
_080A0E18:
	.4byte gUnknown_08167E51
_080A0E1C:
	.4byte 0x00001754
_080A0E20:
	.4byte gUnknown_0200EBB4
_080A0E24:
	.4byte gUnknown_0200EBA0
_080A0E28:
	.4byte 0x00001664
_080A0E2C:
	.4byte gUnknown_0200EBDC
_080A0E30:
	.4byte gUnknown_0200EBC8
_080A0E34:
	.4byte 0x00001666
_080A0E38:
	.4byte 0x00001757
	THUMB_FUNC_END sub_080A0D10

