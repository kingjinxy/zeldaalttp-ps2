	THUMB_FUNC_START sub_080A13E0
sub_080A13E0: @ 0x080A13E0
	push {r4,r5,lr}
	ldr r1, _080A1430  @ =gRam
	ldr r0, _080A1434  @ =0x00001719
	add r2, r1, r0
	mov r5, #0
	mov r0, #20
	strb r0, [r2]
	ldr r2, _080A1438  @ =0x000016D5
	add r0, r1, r2
	ldrb r0, [r0]
	lsr r3, r0, #1
	ldr r2, _080A143C  @ =0x00000545
	add r0, r1, r2
	ldrb r0, [r0]
	mov r2, #15
	and r2, r2, r0
	add r4, r1, #0
	cmp r2, #0
	beq _080A1412
	ldr r0, _080A1440  @ =gUnknown_08168C5D
	add r0, r3, r0
	ldrb r0, [r0]
	and r2, r2, r0
	cmp r2, #0
	bne _080A144C
_080A1412:
	ldr r1, _080A1444  @ =0x00001727
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080A1448  @ =0x000016D6
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #80
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #2
	add r0, r4, r2
	strb r5, [r0]
	mov r3, #0
	b _080A1474
	.byte 0x00
	.byte 0x00
_080A1430:
	.4byte gRam
_080A1434:
	.4byte 0x00001719
_080A1438:
	.4byte 0x000016D5
_080A143C:
	.4byte 0x00000545
_080A1440:
	.4byte gUnknown_08168C5D
_080A1444:
	.4byte 0x00001727
_080A1448:
	.4byte 0x000016D6
_080A144C:
	ldr r1, _080A14DC  @ =0x00001727
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _080A14E0  @ =0x00001794
	add r1, r4, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A1492
	ldr r1, _080A14E4  @ =0x00001796
	add r0, r4, r1
	ldrb r0, [r0]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #7
	bne _080A1474
	mov r3, #1
_080A1474:
	ldr r2, _080A14E4  @ =0x00001796
	add r0, r4, r2
	strb r3, [r0]
	ldr r0, _080A14E8  @ =gUnknown_08168C68
	add r0, r3, r0
	ldrb r1, [r0]
	sub r2, r2, #3
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080A14EC  @ =gUnknown_08168C61
	add r0, r3, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
_080A1492:
	ldr r1, _080A14F0  @ =0x00000544
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080A14D4
	ldr r2, _080A14F4  @ =0x00001719
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #111
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #14
	add r0, r4, r2
	strb r1, [r0]
	sub r2, r2, #3
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #117
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _080A14F8  @ =0x000016E9
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080A14FC  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_080A14D4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A14DC:
	.4byte 0x00001727
_080A14E0:
	.4byte 0x00001794
_080A14E4:
	.4byte 0x00001796
_080A14E8:
	.4byte gUnknown_08168C68
_080A14EC:
	.4byte gUnknown_08168C61
_080A14F0:
	.4byte 0x00000544
_080A14F4:
	.4byte 0x00001719
_080A14F8:
	.4byte 0x000016E9
_080A14FC:
	.4byte 0x00001705
	THUMB_FUNC_END sub_080A13E0

