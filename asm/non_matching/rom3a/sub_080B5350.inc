	THUMB_FUNC_START sub_080B5350
sub_080B5350: @ 0x080B5350
	push {r4-r6,lr}
	sub sp, sp, #16
	ldr r2, _080B53E0  @ =gRam
	ldr r0, _080B53E4  @ =0x00000964
	add r4, r2, r0
	mov r1, #0
	ldrsb r1, [r4, r1]
	mov r0, #4
	sub r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	blt _080B5396
	ldr r1, _080B53E8  @ =0x00000965
	add r3, r5, r1
	ldrb r0, [r3]
	add r0, r0, #4
	ldrb r1, [r4]
	sub r2, r0, r1
	strb r2, [r3]
	ldr r1, _080B53EC  @ =gUnknown_0816F702
	ldr r4, _080B53F0  @ =0x00000AB2
	add r0, r5, r4
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r1, r0, #4
	sub r0, r1, #4
	cmp r0, #0
	blt _080B5396
	sub r0, r0, r2
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r3]
_080B5396:
	ldr r6, _080B53F4  @ =0x00000CB2
	add r0, r5, r6
	ldrh r0, [r0]
	mov r4, #0
	cmp r0, #0
	bne _080B53A4
	mov r4, #7
_080B53A4:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r1, _080B53F8  @ =gUnknown_0816F09C
	ldrb r1, [r1]
	ldr r3, _080B53FC  @ =gUnknown_0816F094
	ldr r6, _080B53E8  @ =0x00000965
	add r2, r5, r6
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	add r2, r2, r3
	ldrb r2, [r2]
	sub r2, r2, #68
	str r4, [sp]
	mov r3, #0
	str r3, [sp, #4]
	str r3, [sp, #8]
	mov r3, #1
	str r3, [sp, #12]
	mov r3, #0
	bl sub_080B35E0
	add sp, sp, #16
	pop {r4-r6}
	pop {r0}
	bx r0
_080B53E0:
	.4byte gRam
_080B53E4:
	.4byte 0x00000964
_080B53E8:
	.4byte 0x00000965
_080B53EC:
	.4byte gUnknown_0816F702
_080B53F0:
	.4byte 0x00000AB2
_080B53F4:
	.4byte 0x00000CB2
_080B53F8:
	.4byte gUnknown_0816F09C
_080B53FC:
	.4byte gUnknown_0816F094
	THUMB_FUNC_END sub_080B5350

