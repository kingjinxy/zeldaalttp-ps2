	THUMB_FUNC_START sub_0806A1C4
sub_0806A1C4: @ 0x0806A1C4
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	sub sp, sp, #4
	ldr r4, _0806A2C4  @ =gRam
	ldr r1, _0806A2C8  @ =0x00000CAA
	add r0, r4, r1
	mov r5, #0
	strb r5, [r0]
	ldr r2, _0806A2CC  @ =0x00001AD0
	add r0, r4, r2
	mov r1, #1
	mov r8, r1
	mov r2, r8
	strb r2, [r0]
	mov r1, sp
	mov r0, #127
	strh r0, [r1]
	ldr r1, _0806A2D0  @ =0x06008000
	ldr r2, _0806A2D4  @ =0x01001000
	mov r0, sp
	bl CpuSet
	ldr r0, _0806A2D8  @ =0x04000010
	mov r1, #0
	mov r9, r1
	strh r5, [r0]
	add r0, r0, #2
	strh r5, [r0]
	add r0, r0, #2
	strh r5, [r0]
	add r0, r0, #2
	strh r5, [r0]
	add r0, r0, #2
	strh r5, [r0]
	add r0, r0, #2
	strh r5, [r0]
	add r0, r0, #2
	strh r5, [r0]
	add r0, r0, #2
	strh r5, [r0]
	ldr r1, _0806A2DC  @ =0x04000008
	ldr r2, _0806A2E0  @ =0x0000F004
	add r0, r2, #0
	strh r0, [r1]
	ldr r0, _0806A2E4  @ =0x00000514
	add r1, r4, r0
	ldr r0, _0806A2E8  @ =0x0000F441
	strh r0, [r1]
	ldr r2, _0806A2EC  @ =0x00000516
	add r1, r4, r2
	ldr r0, _0806A2F0  @ =0x0000F842
	strh r0, [r1]
	mov r0, #163
	lsl r0, r0, #3
	add r1, r4, r0
	ldr r0, _0806A2F4  @ =0x0000FC43
	strh r0, [r1]
	mov r1, #201
	lsl r1, r1, #4
	add r0, r4, r1
	mov r6, #1
	mov r2, r8
	strh r2, [r0]
	bl sub_08130384
	ldr r0, _0806A2F8  @ =gUnknown_02000800
	ldr r1, _0806A2FC  @ =gUnknown_02000C00
	mov r2, #128
	lsl r2, r2, #1
	bl CpuSet
	ldr r1, _0806A300  @ =0x0000099B
	add r0, r4, r1
	strb r6, [r0]
	ldr r2, _0806A304  @ =0x0000050C
	add r1, r4, r2
	mov r0, #136
	lsl r0, r0, #5
	strh r0, [r1]
	ldr r1, _0806A308  @ =0x0000095C
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _0806A30C  @ =0x0000095E
	add r0, r4, r2
	strh r5, [r0]
	sub r1, r1, #12
	add r0, r4, r1
	strh r5, [r0]
	sub r2, r2, #8
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strh r5, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strh r5, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r5, [r0]
	add r1, r1, #94
	add r0, r4, r1
	mov r2, r9
	strb r2, [r0]
	add r1, r1, #134
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _0806A310  @ =0x00001B16
	add r0, r4, r2
	mov r1, r9
	strb r1, [r0]
	ldr r2, _0806A314  @ =0x000009AD
	add r4, r4, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
_0806A2C4:
	.4byte gRam
_0806A2C8:
	.4byte 0x00000CAA
_0806A2CC:
	.4byte 0x00001AD0
_0806A2D0:
	.4byte 0x06008000
_0806A2D4:
	.4byte 0x01001000
_0806A2D8:
	.4byte 0x04000010
_0806A2DC:
	.4byte 0x04000008
_0806A2E0:
	.4byte 0x0000F004
_0806A2E4:
	.4byte 0x00000514
_0806A2E8:
	.4byte 0x0000F441
_0806A2EC:
	.4byte 0x00000516
_0806A2F0:
	.4byte 0x0000F842
_0806A2F4:
	.4byte 0x0000FC43
_0806A2F8:
	.4byte gUnknown_02000800
_0806A2FC:
	.4byte gUnknown_02000C00
_0806A300:
	.4byte 0x0000099B
_0806A304:
	.4byte 0x0000050C
_0806A308:
	.4byte 0x0000095C
_0806A30C:
	.4byte 0x0000095E
_0806A310:
	.4byte 0x00001B16
_0806A314:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806A1C4

