	THUMB_FUNC_START sub_080D8134
sub_080D8134: @ 0x080D8134
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r4, _080D819C  @ =gRam
	ldr r1, _080D81A0  @ =0x00000EE2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080D81A4  @ =0x00000F02
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080D81A8  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, #8
	add r2, r2, #3
	add r1, r4, r2
	strb r0, [r1]
	ldr r1, _080D81AC  @ =0x00000EF2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	mov r0, #6
	bl sub_08079844
	ldr r0, _080D81B0  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D81B4  @ =0x00000FC2
	add r4, r4, r1
	add r5, r5, r4
	mov r0, #128
	strb r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
_080D819C:
	.4byte gRam
_080D81A0:
	.4byte 0x00000EE2
_080D81A4:
	.4byte 0x00000F02
_080D81A8:
	.4byte 0x00000ED2
_080D81AC:
	.4byte 0x00000EF2
_080D81B0:
	.4byte 0x00000F52
_080D81B4:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080D8134

