	THUMB_FUNC_START sub_080CCD98
sub_080CCD98: @ 0x080CCD98
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r5, _080CCE1C  @ =gRam
	ldr r2, _080CCE20  @ =0x00000D4B
	add r0, r5, r2
	add r2, r1, r0
	ldrb r3, [r2]
	cmp r3, #128
	bne _080CCE40
	mov r0, #127
	strb r0, [r2]
	mov r0, #144
	mov r2, #12
	bl sub_080C9AAC
	add r4, r0, #0
	cmp r4, #0
	blt _080CCE52
	ldr r1, _080CCE24  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080CCE28  @ =0x000016C4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CCE2C  @ =0x00000F02
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CCE30  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	sub r2, r2, #5
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CCE34  @ =0x00000EF2
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CCE38  @ =0x00001142
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #208
	strb r1, [r0]
	lsl r0, r4, #24
	lsr r0, r0, #24
	mov r1, #108
	bl sub_080CF0AC
	ldr r2, _080CCE3C  @ =0x000010F2
	add r0, r5, r2
	add r0, r4, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	b _080CCE52
_080CCE1C:
	.4byte gRam
_080CCE20:
	.4byte 0x00000D4B
_080CCE24:
	.4byte 0x00000EE2
_080CCE28:
	.4byte 0x000016C4
_080CCE2C:
	.4byte 0x00000F02
_080CCE30:
	.4byte 0x00000ED2
_080CCE34:
	.4byte 0x00000EF2
_080CCE38:
	.4byte 0x00001142
_080CCE3C:
	.4byte 0x000010F2
_080CCE40:
	ldr r1, _080CCE58  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080CCE52
	sub r0, r3, #1
	strb r0, [r2]
_080CCE52:
	pop {r4,r5}
	pop {r0}
	bx r0
_080CCE58:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080CCD98

