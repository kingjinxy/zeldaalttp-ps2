	THUMB_FUNC_START sub_08092F78
sub_08092F78: @ 0x08092F78
	push {r4,r5,lr}
	ldr r4, _0809304C  @ =gRam
	ldr r1, _08093050  @ =0x000017FE
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08093054  @ =0x000017A6
	add r0, r4, r2
	mov r5, #0
	strh r1, [r0]
	sub r2, r2, #7
	add r0, r4, r2
	strb r5, [r0]
	add r2, r2, #230
	add r0, r4, r2
	strb r5, [r0]
	ldr r2, _08093058  @ =0x0000176F
	add r0, r4, r2
	strb r5, [r0]
	add r2, r2, #21
	add r0, r4, r2
	strh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strb r5, [r0]
	add r2, r2, #130
	add r0, r4, r2
	strb r5, [r0]
	ldr r2, _0809305C  @ =0x00000A58
	add r0, r4, r2
	strh r1, [r0]
	mov r1, #191
	lsl r1, r1, #5
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08093060  @ =0x00001796
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #73
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #3
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #174
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #171
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #169
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #168
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #119
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #141
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08093064  @ =0x00001702
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #13
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #239
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #103
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #225
	add r0, r4, r2
	strb r5, [r0]
	bl sub_08092BF4
	ldr r1, _08093068  @ =0x0000180D
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809306C  @ =0x00001789
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #3
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #15
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #114
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _08093070  @ =0x0000188F
	add r0, r4, r2
	strb r5, [r0]
	ldr r0, _08093074  @ =0x00001788
	add r4, r4, r0
	strb r5, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_0809304C:
	.4byte gRam
_08093050:
	.4byte 0x000017FE
_08093054:
	.4byte 0x000017A6
_08093058:
	.4byte 0x0000176F
_0809305C:
	.4byte 0x00000A58
_08093060:
	.4byte 0x00001796
_08093064:
	.4byte 0x00001702
_08093068:
	.4byte 0x0000180D
_0809306C:
	.4byte 0x00001789
_08093070:
	.4byte 0x0000188F
_08093074:
	.4byte 0x00001788
	THUMB_FUNC_END sub_08092F78

