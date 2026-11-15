	THUMB_FUNC_START sub_08104F30
sub_08104F30: @ 0x08104F30
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	ldr r7, _08104FD0  @ =gRam
	ldr r0, _08104FD4  @ =0x00000F92
	add r3, r7, r0
	add r3, r4, r3
	ldr r1, _08104FD8  @ =0x00001052
	add r0, r7, r1
	add r6, r4, r0
	ldrb r1, [r6]
	lsr r1, r1, #1
	mov r2, #1
	mov r9, r2
	mov r0, r9
	and r1, r1, r0
	ldr r2, _08104FDC  @ =0x00000FB2
	add r0, r7, r2
	add r5, r4, r0
	ldrb r2, [r5]
	mov r0, #2
	and r0, r0, r2
	orr r1, r1, r0
	strb r1, [r3]
	add r0, r4, #0
	bl sub_08104FF4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08104FC4
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _08104FE0  @ =0x00000FC2
	add r0, r7, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _08104F98
	mov r0, #112
	strb r0, [r3]
	ldrb r0, [r5]
	mov r2, r9
	eor r0, r0, r2
	strb r0, [r5]
_08104F98:
	ldr r0, _08104FE4  @ =0x00000F22
	add r1, r7, r0
	add r1, r1, r8
	ldr r2, _08104FE8  @ =gUnknown_0817BDAC
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r2, _08104FEC  @ =0x00000F12
	add r1, r7, r2
	add r1, r1, r8
	ldr r2, _08104FF0  @ =gUnknown_0817BDB0
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, r8
	bl Sprite3_Move
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
_08104FC4:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08104FD0:
	.4byte gRam
_08104FD4:
	.4byte 0x00000F92
_08104FD8:
	.4byte 0x00001052
_08104FDC:
	.4byte 0x00000FB2
_08104FE0:
	.4byte 0x00000FC2
_08104FE4:
	.4byte 0x00000F22
_08104FE8:
	.4byte gUnknown_0817BDAC
_08104FEC:
	.4byte 0x00000F12
_08104FF0:
	.4byte gUnknown_0817BDB0
	THUMB_FUNC_END sub_08104F30

