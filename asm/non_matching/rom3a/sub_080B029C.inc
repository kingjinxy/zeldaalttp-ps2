	THUMB_FUNC_START sub_080B029C
sub_080B029C: @ 0x080B029C
	push {r4-r7,lr}
	ldr r5, _080B0308  @ =gRam
	ldr r0, _080B030C  @ =0x000017F0
	add r6, r5, r0
	ldrb r4, [r6]
	ldr r1, _080B0310  @ =0x000015DD
	add r0, r5, r1
	strb r4, [r0]
	mov r2, #128
	ldr r1, _080B0314  @ =0x00000DF7
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	add r0, r4, #0
	bl sub_080C1768
	ldr r2, _080B0318  @ =0x00000DE3
	add r0, r5, r2
	add r0, r4, r0
	ldrb r3, [r0]
	cmp r3, #0
	bne _080B032C
	ldr r1, _080B031C  @ =0x00000DCF
	add r0, r5, r1
	add r2, r4, r0
	ldr r0, _080B0320  @ =gUnknown_0816E8DC
	add r0, r4, r0
	ldrb r1, [r0]
	ldrb r0, [r2]
	cmp r0, r1
	bcs _080B032C
	strb r1, [r2]
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	strb r4, [r6]
	cmp r4, #8
	bne _080B032C
	mov r0, #7
	strb r0, [r6]
	ldr r2, _080B0324  @ =0x00000E15
	add r1, r5, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080B0328  @ =0x00001830
	add r0, r5, r1
	strb r3, [r0]
	mov r0, #44
	mov r1, #0
	bl sub_0812A324
	b _080B0382
	.byte 0x00
	.byte 0x00
_080B0308:
	.4byte gRam
_080B030C:
	.4byte 0x000017F0
_080B0310:
	.4byte 0x000015DD
_080B0314:
	.4byte 0x00000DF7
_080B0318:
	.4byte 0x00000DE3
_080B031C:
	.4byte 0x00000DCF
_080B0320:
	.4byte gUnknown_0816E8DC
_080B0324:
	.4byte 0x00000E15
_080B0328:
	.4byte 0x00001830
_080B032C:
	cmp r4, #7
	bne _080B0382
	mov r2, #6
	ldr r0, _080B038C  @ =gRam
	ldr r1, _080B0390  @ =0x00001830
	add r6, r0, r1
	ldrb r1, [r6]
	add r5, r0, #0
	cmp r1, #6
	beq _080B035A
	ldr r0, _080B0394  @ =0x00000DCF
	add r7, r5, r0
	ldr r1, _080B0398  @ =0x00000DD6
	add r3, r5, r1
_080B0348:
	add r1, r2, r7
	ldrb r0, [r3]
	strb r0, [r1]
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldrb r0, [r6]
	cmp r2, r0
	bne _080B0348
_080B035A:
	ldr r1, _080B039C  @ =0x00000DE3
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B0382
	ldr r2, _080B0394  @ =0x00000DCF
	add r0, r5, r2
	add r0, r4, r0
	ldr r1, _080B03A0  @ =gUnknown_0816E8DC
	ldr r2, _080B0390  @ =0x00001830
	add r3, r5, r2
	ldrb r2, [r3]
	add r1, r2, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcs _080B0382
	sub r0, r2, #1
	strb r0, [r3]
_080B0382:
	bl sub_080B0478
	pop {r4-r7}
	pop {r0}
	bx r0
_080B038C:
	.4byte gRam
_080B0390:
	.4byte 0x00001830
_080B0394:
	.4byte 0x00000DCF
_080B0398:
	.4byte 0x00000DD6
_080B039C:
	.4byte 0x00000DE3
_080B03A0:
	.4byte gUnknown_0816E8DC
	THUMB_FUNC_END sub_080B029C

