	THUMB_FUNC_START sub_080DE2AC
sub_080DE2AC: @ 0x080DE2AC
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DE2E0  @ =gRam
	ldr r1, _080DE2E4  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DE2C8
	bl sub_080DE0DC
	cmp r0, #0
	bne _080DE2F0
_080DE2C8:
	ldr r1, _080DE2E8  @ =0x00000103
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080DE2EC  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080DE306
	.byte 0x00
	.byte 0x00
_080DE2E0:
	.4byte gRam
_080DE2E4:
	.4byte 0x00001AE2
_080DE2E8:
	.4byte 0x00000103
_080DE2EC:
	.4byte 0x00000F52
_080DE2F0:
	ldr r1, _080DE310  @ =0x00000105
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080DE314  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080DE306:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DE310:
	.4byte 0x00000105
_080DE314:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE2AC

