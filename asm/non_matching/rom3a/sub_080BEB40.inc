	THUMB_FUNC_START sub_080BEB40
sub_080BEB40: @ 0x080BEB40
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	sub sp, sp, #4
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r3, sp
	ldr r2, _080BEBC4  @ =gRam
	ldr r0, _080BEBC8  @ =0x00000EE2
	add r0, r0, r2
	mov r8, r0
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r4, _080BEBCC  @ =0x00000F02
	add r6, r2, r4
	ldrb r0, [r6]
	strb r0, [r3, #1]
	ldr r0, _080BEBD0  @ =0x00000ED2
	add r5, r2, r0
	ldrb r0, [r5]
	strb r0, [r3, #2]
	ldr r0, _080BEBD4  @ =0x00000EF2
	add r4, r2, r0
	ldrb r0, [r4]
	strb r0, [r3, #3]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	mov r3, r8
	strb r0, [r3]
	ldr r3, _080BEBD8  @ =0x00000961
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r6]
	add r3, r3, #3
	add r0, r2, r3
	ldrb r0, [r0]
	strb r0, [r5]
	ldr r0, _080BEBDC  @ =0x00000965
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r4]
	mov r0, #0
	bl sub_080C2CB4
	mov r0, sp
	ldrb r0, [r0]
	mov r1, r8
	strb r0, [r1]
	mov r0, sp
	ldrb r0, [r0, #1]
	strb r0, [r6]
	mov r0, sp
	ldrb r0, [r0, #2]
	strb r0, [r5]
	mov r0, sp
	ldrb r0, [r0, #3]
	strb r0, [r4]
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_080BEBC4:
	.4byte gRam
_080BEBC8:
	.4byte 0x00000EE2
_080BEBCC:
	.4byte 0x00000F02
_080BEBD0:
	.4byte 0x00000ED2
_080BEBD4:
	.4byte 0x00000EF2
_080BEBD8:
	.4byte 0x00000961
_080BEBDC:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080BEB40

