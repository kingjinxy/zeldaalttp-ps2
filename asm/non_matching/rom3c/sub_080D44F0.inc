	THUMB_FUNC_START sub_080D44F0
sub_080D44F0: @ 0x080D44F0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C36D8
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D4518
	ldr r0, _080D4510  @ =gRam
	ldr r2, _080D4514  @ =0x00000F22
	add r1, r0, r2
	add r1, r4, r1
	mov r2, #16
	b _080D4522
	.byte 0x00
	.byte 0x00
_080D4510:
	.4byte gRam
_080D4514:
	.4byte 0x00000F22
_080D4518:
	ldr r0, _080D4544  @ =gRam
	ldr r3, _080D4548  @ =0x00000F22
	add r1, r0, r3
	add r1, r4, r1
	mov r2, #240
_080D4522:
	strb r2, [r1]
	add r2, r0, #0
	mov r1, #193
	lsl r1, r1, #4
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080D4550
	ldr r3, _080D454C  @ =0x00000F12
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #252
	b _080D4558
_080D4544:
	.4byte gRam
_080D4548:
	.4byte 0x00000F22
_080D454C:
	.4byte 0x00000F12
_080D4550:
	ldr r1, _080D4570  @ =0x00000F12
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #4
_080D4558:
	strb r1, [r0]
	ldr r3, _080D4574  @ =0x00001172
	add r0, r2, r3
	add r0, r4, r0
	ldr r3, _080D4570  @ =0x00000F12
	add r1, r2, r3
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080D4570:
	.4byte 0x00000F12
_080D4574:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080D44F0

