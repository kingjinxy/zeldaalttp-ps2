	THUMB_FUNC_START sub_081114D0
sub_081114D0: @ 0x081114D0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _081115A0  @ =gRam
	ldr r1, _081115A4  @ =0x00000F62
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r2, r0, #3
	add r2, r2, r0
	lsl r2, r2, #2
	sub r1, r1, #16
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	ldr r1, _081115A8  @ =gUnknown_0817D5EC
	add r0, r0, r1
	add r4, r2, r0
	ldr r1, [r4, #4]
	ldr r2, _081115AC  @ =0x0000096C
	add r0, r7, r2
	strh r1, [r0]
	ldr r1, [r4]
	add r0, r6, #0
	bl sub_080C94D0
	mov r5, #0
	ldr r0, [r4, #4]
	cmp r5, r0
	bge _08111546
	mov r9, r7
	ldr r0, _081115B0  @ =gUnknown_03003E74
	mov r8, r0
	ldr r7, _081115B4  @ =0x00000555
	mov r1, #15
	mov r12, r1
_08111524:
	mov r2, r8
	ldrh r1, [r2]
	add r1, r1, r5
	lsl r1, r1, #3
	add r1, r1, r9
	add r1, r1, r7
	ldrb r2, [r4, #8]
	lsl r2, r2, #4
	ldrb r3, [r1]
	mov r0, r12
	and r0, r0, r3
	orr r0, r0, r2
	strb r0, [r1]
	add r5, r5, #1
	ldr r0, [r4, #4]
	cmp r5, r0
	blt _08111524
_08111546:
	add r0, r6, #0
	bl sub_080C6230
	ldr r5, _081115A0  @ =gRam
	ldr r1, _081115A4  @ =0x00000F62
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _08111594
	ldr r2, _081115B8  @ =0x00000996
	add r0, r5, r2
	ldrb r1, [r0]
	add r0, r6, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08111594
	bl GetRandomInt
	mov r4, #15
	add r1, r4, #0
	and r1, r1, r0
	sub r1, r1, #4
	mov r2, #150
	lsl r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	bl GetRandomInt
	and r4, r4, r0
	sub r4, r4, #4
	ldr r1, _081115BC  @ =0x00000964
	add r0, r5, r1
	strh r4, [r0]
	add r0, r6, #0
	bl sub_080C9A58
_08111594:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_081115A0:
	.4byte gRam
_081115A4:
	.4byte 0x00000F62
_081115A8:
	.4byte gUnknown_0817D5EC
_081115AC:
	.4byte 0x0000096C
_081115B0:
	.4byte gUnknown_03003E74
_081115B4:
	.4byte 0x00000555
_081115B8:
	.4byte 0x00000996
_081115BC:
	.4byte 0x00000964
	THUMB_FUNC_END sub_081114D0

