	THUMB_FUNC_START sub_081034C0
sub_081034C0: @ 0x081034C0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r1, #109
	bl sub_080CF0AC
	bl GetRandomInt
	ldr r2, _08103570  @ =gRam
	mov r1, #4
	and r1, r1, r0
	ldr r3, _08103574  @ =0x00000979
	add r0, r2, r3
	strb r1, [r0]
	mov r6, #3
	add r5, r2, #0
	mov r7, #1
	ldr r0, _08103578  @ =0x00001132
	add r0, r0, r5
	mov r9, r0
_081034F0:
	mov r0, #164
	mov r1, r8
	bl sub_080CA538
	add r4, r0, #0
	lsl r6, r6, #24
	cmp r4, #0
	blt _08103558
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r1, _0810357C  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
	ldr r3, _08103580  @ =0x00000F92
	add r0, r5, r3
	add r0, r4, r0
	strb r7, [r0]
	add r1, r1, #48
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
	ldr r3, _08103584  @ =0x00001152
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _08103574  @ =0x00000979
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r2, r6, #24
	orr r2, r2, r0
	ldr r3, _08103588  @ =0x00000F22
	add r1, r5, r3
	add r1, r4, r1
	ldr r0, _0810358C  @ =gUnknown_0817BA1C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08103590  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _08103594  @ =gUnknown_0817BA24
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	mov r3, r9
	add r1, r4, r3
	mov r0, #28
	strb r0, [r1]
_08103558:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r6, r1
	lsr r6, r0, #24
	cmp r0, #0
	bge _081034F0
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_08103570:
	.4byte gRam
_08103574:
	.4byte 0x00000979
_08103578:
	.4byte 0x00001132
_0810357C:
	.4byte 0x00000F52
_08103580:
	.4byte 0x00000F92
_08103584:
	.4byte 0x00001152
_08103588:
	.4byte 0x00000F22
_0810358C:
	.4byte gUnknown_0817BA1C
_08103590:
	.4byte 0x00000F12
_08103594:
	.4byte gUnknown_0817BA24
	THUMB_FUNC_END sub_081034C0

