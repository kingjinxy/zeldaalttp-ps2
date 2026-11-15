	THUMB_FUNC_START sub_080E89E4
sub_080E89E4: @ 0x080E89E4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #85
	add r1, r4, #0
	mov r2, #13
	bl sub_080C9AAC
	add r6, r0, #0
	cmp r6, #0
	blt _080E8AAE
	add r0, r4, #0
	mov r1, #89
	bl sub_080CF140
	ldr r4, _080E8AB8  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	add r1, r1, #4
	ldr r2, _080E8ABC  @ =0x00000EE2
	add r0, r4, r2
	add r0, r6, r0
	mov r5, #0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r4, r2
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080E8AC0  @ =0x00000964
	add r1, r4, r0
	ldr r2, _080E8AC4  @ =0x00000968
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	sub r0, r0, #4
	ldrh r1, [r1]
	sub r1, r1, r0
	ldr r2, _080E8AC8  @ =0x00000ED2
	add r0, r4, r2
	add r0, r6, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r4, r2
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080E8ACC  @ =0x00001032
	add r2, r4, r0
	add r2, r6, r2
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _080E8AD0  @ =0x00001122
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #6
	strb r1, [r0]
	ldr r2, _080E8AD4  @ =0x00001132
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #84
	strb r1, [r0]
	sub r2, r2, #208
	add r0, r4, r2
	add r0, r6, r0
	strb r1, [r0]
	ldr r1, _080E8AD8  @ =0x00001012
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #32
	strb r1, [r0]
	lsl r0, r6, #24
	lsr r0, r0, #24
	bl sub_080C35FC
	ldr r2, _080E8ADC  @ =0x00000FC2
	add r0, r4, r2
	add r0, r6, r0
	mov r1, #20
	strb r1, [r0]
	ldr r1, _080E8AE0  @ =0x00000FD2
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #16
	strb r1, [r0]
	ldr r2, _080E8AE4  @ =0x000011B2
	add r0, r4, r2
	add r0, r6, r0
	strb r5, [r0]
	ldr r0, _080E8AE8  @ =0x00000E75
	add r4, r4, r0
	add r4, r6, r4
	mov r0, #72
	strb r0, [r4]
_080E8AAE:
	add r0, r6, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080E8AB8:
	.4byte gRam
_080E8ABC:
	.4byte 0x00000EE2
_080E8AC0:
	.4byte 0x00000964
_080E8AC4:
	.4byte 0x00000968
_080E8AC8:
	.4byte 0x00000ED2
_080E8ACC:
	.4byte 0x00001032
_080E8AD0:
	.4byte 0x00001122
_080E8AD4:
	.4byte 0x00001132
_080E8AD8:
	.4byte 0x00001012
_080E8ADC:
	.4byte 0x00000FC2
_080E8AE0:
	.4byte 0x00000FD2
_080E8AE4:
	.4byte 0x000011B2
_080E8AE8:
	.4byte 0x00000E75
	THUMB_FUNC_END sub_080E89E4

