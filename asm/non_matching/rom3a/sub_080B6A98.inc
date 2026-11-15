	THUMB_FUNC_START sub_080B6A98
sub_080B6A98: @ 0x080B6A98
	push {r4-r6,lr}
	mov r6, r10
	mov r5, r9
	mov r4, r8
	push {r4-r6}
	sub sp, sp, #4
	mov r0, sp
	mov r5, #0
	strh r5, [r0]
	ldr r1, _080B6BAC  @ =0x06008000
	ldr r2, _080B6BB0  @ =0x01001000
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	strh r5, [r0]
	ldr r1, _080B6BB4  @ =0x06004000
	ldr r2, _080B6BB8  @ =0x01002000
	bl CpuSet
	ldr r4, _080B6BBC  @ =gRam
	ldr r1, _080B6BC0  @ =0x000009D3
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080B6BC4  @ =0x000009D4
	add r0, r4, r2
	strb r5, [r0]
	ldr r3, _080B6BC8  @ =gUnknown_02006880
	mov r8, r3
	ldrh r0, [r3]
	mov r10, r0
	ldr r6, _080B6BCC  @ =gUnknown_02006882
	ldrh r1, [r6]
	mov r9, r1
	ldr r3, _080B6BD0  @ =0x0000050C
	add r2, r4, r3
	ldrh r0, [r2]
	mov r3, #128
	lsl r3, r3, #4
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #115
	bl sub_0807958C
	mov r1, r10
	mov r0, r8
	strh r1, [r0]
	mov r2, r9
	strh r2, [r6]
	ldr r3, _080B6BD4  @ =0x00000CAE
	add r1, r4, r3
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080B6BD8  @ =0x00000CA4
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080B6BDC  @ =0x00000CA5
	add r1, r4, r2
	mov r0, #14
	strb r0, [r1]
	sub r3, r3, #8
	add r1, r4, r3
	mov r0, #3
	strb r0, [r1]
	mov r0, #127
	mov r1, #1
	bl sub_080793C0
	ldr r1, _080B6BE0  @ =gUnknown_02000834
	ldr r2, _080B6BE4  @ =0x00007FFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r3, _080B6BE8  @ =0x00001AD0
	add r0, r4, r3
	strb r5, [r0]
	ldr r0, _080B6BEC  @ =0x00001AE8
	add r1, r4, r0
	ldr r0, _080B6BF0  @ =0x00000117
	strh r0, [r1]
	ldr r1, _080B6BF4  @ =gUnknown_0200688B
	mov r0, #148
	strb r0, [r1]
	add r1, r1, #5
	mov r0, #104
	strb r0, [r1]
	ldr r0, _080B6BF8  @ =gUnknown_02006891
	strb r5, [r0]
	add r0, r0, #1
	strb r5, [r0]
	add r0, r0, #1
	strb r5, [r0]
	add r0, r0, #13
	strb r5, [r0]
	add r0, r0, #16
	strb r5, [r0]
	add r0, r0, #15
	strb r5, [r0]
	sub r1, r1, #11
	mov r0, #255
	strb r0, [r1]
	ldr r1, _080B6BFC  @ =0x0000099D
	add r0, r4, r1
	strb r5, [r0]
	bl sub_080B68F4
	mov r2, #163
	lsl r2, r2, #4
	add r0, r4, r2
	mov r1, #64
	strh r1, [r0]
	ldr r3, _080B6C00  @ =0x00000A32
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _080B6C04  @ =0x00000A2C
	add r0, r4, r1
	mov r1, #245
	strh r1, [r0]
	sub r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	sub r3, r3, #218
	add r1, r4, r3
	mov r0, #16
	strh r0, [r1]
	ldr r0, _080B6C08  @ =0x00000952
	add r4, r4, r0
	mov r0, #128
	lsl r0, r0, #1
	strh r0, [r4]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r6}
	pop {r0}
	bx r0
_080B6BAC:
	.4byte 0x06008000
_080B6BB0:
	.4byte 0x01001000
_080B6BB4:
	.4byte 0x06004000
_080B6BB8:
	.4byte 0x01002000
_080B6BBC:
	.4byte gRam
_080B6BC0:
	.4byte 0x000009D3
_080B6BC4:
	.4byte 0x000009D4
_080B6BC8:
	.4byte gUnknown_02006880
_080B6BCC:
	.4byte gUnknown_02006882
_080B6BD0:
	.4byte 0x0000050C
_080B6BD4:
	.4byte 0x00000CAE
_080B6BD8:
	.4byte 0x00000CA4
_080B6BDC:
	.4byte 0x00000CA5
_080B6BE0:
	.4byte gUnknown_02000834
_080B6BE4:
	.4byte 0x00007FFF
_080B6BE8:
	.4byte 0x00001AD0
_080B6BEC:
	.4byte 0x00001AE8
_080B6BF0:
	.4byte 0x00000117
_080B6BF4:
	.4byte gUnknown_0200688B
_080B6BF8:
	.4byte gUnknown_02006891
_080B6BFC:
	.4byte 0x0000099D
_080B6C00:
	.4byte 0x00000A32
_080B6C04:
	.4byte 0x00000A2C
_080B6C08:
	.4byte 0x00000952
	THUMB_FUNC_END sub_080B6A98

