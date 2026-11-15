	THUMB_FUNC_START sub_08110E60
sub_08110E60: @ 0x08110E60
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _08110EB8  @ =gRam
	ldr r0, _08110EBC  @ =0x00000FB2
	add r1, r2, r0
	add r1, r3, r1
	ldr r4, _08110EC0  @ =0x00001082
	add r0, r2, r4
	add r0, r3, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	eor r1, r1, r0
	mov r0, #2
	and r1, r1, r0
	add r4, r2, #0
	cmp r1, #0
	beq _08110EEA
	ldr r5, _08110EC4  @ =0x00000ED2
	add r2, r4, r5
	add r2, r3, r2
	ldrb r1, [r2]
	mov r0, #248
	and r0, r0, r1
	add r0, r0, #4
	mov r5, #150
	lsl r5, r5, #4
	add r1, r4, r5
	strb r0, [r1]
	ldrb r1, [r2]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r2, r1, #0
	cmp r1, #0
	beq _08110EEA
	lsl r0, r1, #24
	cmp r0, #0
	ble _08110ECC
	ldr r2, _08110EC8  @ =0x00000DAA
	add r0, r4, r2
	strh r1, [r0]
	b _08110EDA
	.byte 0x00
	.byte 0x00
_08110EB8:
	.4byte gRam
_08110EBC:
	.4byte 0x00000FB2
_08110EC0:
	.4byte 0x00001082
_08110EC4:
	.4byte 0x00000ED2
_08110EC8:
	.4byte 0x00000DAA
_08110ECC:
	mov r5, #255
	lsl r5, r5, #8
	add r0, r5, #0
	add r0, r2, r0
	ldr r2, _08110EF0  @ =0x00000DAA
	add r1, r4, r2
	strh r0, [r1]
_08110EDA:
	ldr r5, _08110EF4  @ =0x00000ED2
	add r0, r4, r5
	add r0, r3, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
_08110EEA:
	pop {r4,r5}
	pop {r0}
	bx r0
_08110EF0:
	.4byte 0x00000DAA
_08110EF4:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_08110E60

