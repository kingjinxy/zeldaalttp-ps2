	THUMB_FUNC_START sub_080D3530
sub_080D3530: @ 0x080D3530
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #26
	bl sub_080CA538
	add r3, r0, #0
	cmp r3, #0
	blt _080D359A
	ldr r2, _080D35A4  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r1, [r0]
	add r1, r1, #44
	ldr r4, _080D35A8  @ =0x00000EE2
	add r0, r2, r4
	add r0, r3, r0
	strb r1, [r0]
	add r4, r4, #32
	add r0, r2, r4
	add r0, r3, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080D35AC  @ =0x00000ED2
	add r0, r2, r1
	add r0, r3, r0
	ldr r4, _080D35B0  @ =0x00000964
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D35B4  @ =0x00000EF2
	add r0, r2, r1
	add r0, r3, r0
	add r4, r4, #1
	add r1, r2, r4
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D35B8  @ =0x00000FB2
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #1
	strb r1, [r0]
	ldr r4, _080D35BC  @ =0x00000F62
	add r0, r2, r4
	add r0, r3, r0
	mov r1, #4
	strb r1, [r0]
	ldr r0, _080D35C0  @ =0x00001172
	add r2, r2, r0
	add r2, r3, r2
	strb r1, [r2]
_080D359A:
	add r0, r3, #0
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080D35A4:
	.4byte gRam
_080D35A8:
	.4byte 0x00000EE2
_080D35AC:
	.4byte 0x00000ED2
_080D35B0:
	.4byte 0x00000964
_080D35B4:
	.4byte 0x00000EF2
_080D35B8:
	.4byte 0x00000FB2
_080D35BC:
	.4byte 0x00000F62
_080D35C0:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080D3530

