	THUMB_FUNC_START sub_080D2654
sub_080D2654: @ 0x080D2654
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #46
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080D26C6
	ldr r2, _080D26CC  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	ldrh r1, [r0]
	add r1, r1, #4
	ldr r3, _080D26D0  @ =0x00000964
	add r0, r2, r3
	ldrh r3, [r0]
	add r3, r3, #4
	ldr r5, _080D26D4  @ =0x00000EE2
	add r0, r2, r5
	add r0, r4, r0
	strb r1, [r0]
	add r5, r5, #32
	add r0, r2, r5
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080D26D8  @ =0x00000ED2
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	sub r5, r5, #16
	add r0, r2, r5
	add r0, r4, r0
	lsr r3, r3, #8
	strb r3, [r0]
	ldr r1, _080D26DC  @ =0x00001082
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r3, _080D26E0  @ =0x00001152
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
	add r5, r5, #208
	add r0, r2, r5
	add r0, r4, r0
	mov r1, #96
	strb r1, [r0]
	ldr r0, _080D26E4  @ =0x00001172
	add r2, r2, r0
	add r2, r4, r2
	strb r1, [r2]
_080D26C6:
	pop {r4,r5}
	pop {r0}
	bx r0
_080D26CC:
	.4byte gRam
_080D26D0:
	.4byte 0x00000964
_080D26D4:
	.4byte 0x00000EE2
_080D26D8:
	.4byte 0x00000ED2
_080D26DC:
	.4byte 0x00001082
_080D26E0:
	.4byte 0x00001152
_080D26E4:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080D2654

