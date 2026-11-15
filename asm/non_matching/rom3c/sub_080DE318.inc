	THUMB_FUNC_START sub_080DE318
sub_080DE318: @ 0x080DE318
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DE34C  @ =gRam
	ldr r1, _080DE350  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DE334
	bl sub_080DE0DC
	cmp r0, #0
	bne _080DE35C
_080DE334:
	ldr r1, _080DE354  @ =0x00000103
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080DE358  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080DE374
	.byte 0x00
	.byte 0x00
_080DE34C:
	.4byte gRam
_080DE350:
	.4byte 0x00001AE2
_080DE354:
	.4byte 0x00000103
_080DE358:
	.4byte 0x00000F52
_080DE35C:
	mov r1, #131
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080DE37C  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DE374:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080DE37C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE318

