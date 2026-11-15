	THUMB_FUNC_START sub_080D32D0
sub_080D32D0: @ 0x080D32D0
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080D3330  @ =gRam
	ldr r1, _080D3334  @ =0x00001AE2
	add r0, r5, r1
	ldrb r6, [r0]
	cmp r6, #0
	bne _080D3364
	bl sub_080AA868
	cmp r0, #9
	ble _080D334C
	mov r0, #10
	neg r0, r0
	bl sub_080AA83C
	add r0, r4, #0
	mov r1, #224
	mov r2, sp
	bl sub_080C9564
	ldr r2, _080D3338  @ =0x00001062
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	ldr r2, _080D333C  @ =0x00000F52
	add r1, r5, r2
	add r0, r0, r1
	mov r2, #5
	strb r2, [r0]
	add r1, r4, r1
	strb r2, [r1]
	ldr r1, _080D3340  @ =0x00000CB4
	add r0, r5, r1
	strb r6, [r0]
	ldr r1, _080D3344  @ =gSword
	mov r0, #255
	strb r0, [r1]
	ldr r0, _080D3348  @ =0x00001662
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	b _080D3378
	.byte 0x00
	.byte 0x00
_080D3330:
	.4byte gRam
_080D3334:
	.4byte 0x00001AE2
_080D3338:
	.4byte 0x00001062
_080D333C:
	.4byte 0x00000F52
_080D3340:
	.4byte 0x00000CB4
_080D3344:
	.4byte gSword
_080D3348:
	.4byte 0x00001662
_080D334C:
	add r0, r4, #0
	mov r1, #223
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080D3360  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	b _080D3378
_080D3360:
	.4byte 0x00000F52
_080D3364:
	add r0, r4, #0
	mov r1, #223
	mov r2, sp
	bl sub_080C9564
	ldr r2, _080D3380  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_080D3378:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080D3380:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D32D0

