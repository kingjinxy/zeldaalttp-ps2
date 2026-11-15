	THUMB_FUNC_START sub_080D3F74
sub_080D3F74: @ 0x080D3F74
	push {r4,r5,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #49
	bl sub_080CA538
	ldr r3, _080D3FE0  @ =gRam
	ldr r1, _080D3FE4  @ =0x00000EE2
	add r2, r3, r1
	add r2, r0, r2
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	ldrb r1, [r1]
	mov r4, #0
	strb r1, [r2]
	ldr r5, _080D3FE8  @ =0x00000F02
	add r1, r3, r5
	add r1, r0, r1
	ldr r5, _080D3FEC  @ =0x00000961
	add r2, r3, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080D3FF0  @ =0x00000ED2
	add r1, r3, r2
	add r1, r0, r1
	add r5, r5, #3
	add r2, r3, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080D3FF4  @ =0x00000EF2
	add r1, r3, r2
	add r1, r0, r1
	add r5, r5, #1
	add r2, r3, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080D3FF8  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r5, _080D3FFC  @ =0x00001132
	add r1, r3, r5
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _080D4000  @ =0x00001172
	add r3, r3, r1
	add r0, r0, r3
	strb r2, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_080D3FE0:
	.4byte gRam
_080D3FE4:
	.4byte 0x00000EE2
_080D3FE8:
	.4byte 0x00000F02
_080D3FEC:
	.4byte 0x00000961
_080D3FF0:
	.4byte 0x00000ED2
_080D3FF4:
	.4byte 0x00000EF2
_080D3FF8:
	.4byte 0x00001052
_080D3FFC:
	.4byte 0x00001132
_080D4000:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080D3F74

