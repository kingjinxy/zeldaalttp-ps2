	THUMB_FUNC_START sub_08100840
sub_08100840: @ 0x08100840
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #41
	mov r1, #0
	bl sub_0812A324
	mov r0, #206
	add r1, r4, #0
	bl sub_080CA538
	ldr r3, _081008D8  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r2, r3, r1
	ldrh r1, [r2]
	add r1, r1, #16
	strh r1, [r2]
	ldr r4, _081008DC  @ =0x00000EE2
	add r1, r3, r4
	add r1, r0, r1
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081008E0  @ =0x00000F02
	add r1, r3, r2
	add r1, r0, r1
	ldr r4, _081008E4  @ =0x00000961
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r1, _081008E8  @ =0x00000964
	add r2, r3, r1
	ldrh r1, [r2]
	add r1, r1, #40
	strh r1, [r2]
	ldr r4, _081008EC  @ =0x00000ED2
	add r1, r3, r4
	add r1, r0, r1
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081008F0  @ =0x00000EF2
	add r1, r3, r2
	add r1, r0, r1
	ldr r4, _081008F4  @ =0x00000965
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081008F8  @ =0x00000F92
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #15
	strb r2, [r1]
	ldr r4, _081008FC  @ =0x00000F62
	add r1, r3, r4
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r2, _08100900  @ =0x00000FC2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #47
	strb r2, [r1]
	add r4, r4, #176
	add r1, r3, r4
	add r1, r0, r1
	mov r2, #9
	strb r2, [r1]
	ldr r1, _08100904  @ =0x00001172
	add r3, r3, r1
	add r3, r0, r3
	strb r2, [r3]
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_081008D8:
	.4byte gRam
_081008DC:
	.4byte 0x00000EE2
_081008E0:
	.4byte 0x00000F02
_081008E4:
	.4byte 0x00000961
_081008E8:
	.4byte 0x00000964
_081008EC:
	.4byte 0x00000ED2
_081008F0:
	.4byte 0x00000EF2
_081008F4:
	.4byte 0x00000965
_081008F8:
	.4byte 0x00000F92
_081008FC:
	.4byte 0x00000F62
_08100900:
	.4byte 0x00000FC2
_08100904:
	.4byte 0x00001172
	THUMB_FUNC_END sub_08100840

