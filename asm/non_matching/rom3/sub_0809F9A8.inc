	THUMB_FUNC_START sub_0809F9A8
sub_0809F9A8: @ 0x0809F9A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _0809FADC  @ =gRam
	ldr r0, _0809FAE0  @ =0x000009DA
	add r4, r1, r0
	ldrh r2, [r4]
	str r2, [sp]
	mov r5, #161
	lsl r5, r5, #4
	add r2, r1, r5
	ldrb r0, [r2]
	str r0, [sp, #4]
	ldr r5, _0809FAE4  @ =0x00001837
	add r0, r1, r5
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809F9F2
	mov r5, #175
	lsl r5, r5, #4
	add r0, r1, r5
	ldrh r0, [r0]
	cmp r0, #0
	bne _0809F9EA
	ldr r0, [sp]
	add r0, r0, #16
	strh r0, [r4]
_0809F9EA:
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
_0809F9F2:
	ldr r7, _0809FADC  @ =gRam
	ldr r1, _0809FAE8  @ =0x00000DC5
	add r0, r7, r1
	add r0, r3, r0
	ldrb r0, [r0]
	ldr r2, _0809FAEC  @ =0x00000968
	add r2, r2, r7
	mov r10, r2
	mov r2, #0
	mov r4, r10
	strb r0, [r4]
	ldr r5, _0809FAF0  @ =0x00000DD9
	add r0, r7, r5
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r4, _0809FAF4  @ =0x00000969
	add r0, r7, r4
	strb r1, [r0]
	sub r5, r5, #10
	add r0, r7, r5
	add r0, r3, r0
	ldrb r0, [r0]
	mov r1, #151
	lsl r1, r1, #4
	add r1, r1, r7
	mov r9, r1
	strb r0, [r1]
	ldr r4, _0809FAF8  @ =0x00000DE3
	add r0, r7, r4
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r5, _0809FAFC  @ =0x00000971
	add r0, r7, r5
	strb r1, [r0]
	ldr r1, _0809FB00  @ =0x00000E3D
	add r0, r7, r1
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	ldr r3, _0809FB04  @ =0x00001733
	add r1, r7, r3
	strb r0, [r1]
	ldr r4, _0809FB08  @ =0x00001714
	add r0, r7, r4
	strb r2, [r0]
	bl sub_0809E970
	ldr r5, _0809FB0C  @ =0x00000B14
	add r0, r7, r5
	ldrh r0, [r0]
	cmp r0, #2
	bne _0809FAB0
	mov r0, r10
	ldrh r6, [r0]
	mov r1, r9
	ldrh r1, [r1]
	mov r8, r1
	mov r2, #161
	lsl r2, r2, #4
	add r5, r7, r2
	mov r0, #1
	strb r0, [r5]
	ldr r3, _0809FB10  @ =0x00000956
	add r0, r7, r3
	ldr r4, _0809FB14  @ =0x00000958
	add r1, r7, r4
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	mov r1, r10
	ldrh r1, [r1]
	add r0, r0, r1
	mov r4, #0
	mov r2, r10
	strh r0, [r2]
	sub r3, r3, #6
	add r0, r7, r3
	ldr r2, _0809FB18  @ =0x00000952
	add r1, r7, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	mov r3, r9
	ldrh r3, [r3]
	add r0, r0, r3
	mov r1, r9
	strh r0, [r1]
	bl sub_0809F8DC
	mov r2, r10
	strh r6, [r2]
	mov r0, r8
	mov r3, r9
	strh r0, [r3]
	strb r4, [r5]
_0809FAB0:
	bl sub_0809F8DC
	ldr r1, _0809FADC  @ =gRam
	mov r2, #161
	lsl r2, r2, #4
	add r0, r1, r2
	mov r3, sp
	ldrb r3, [r3, #4]
	strb r3, [r0]
	ldr r4, _0809FAE0  @ =0x000009DA
	add r0, r1, r4
	mov r5, sp
	ldrh r5, [r5]
	strh r5, [r0]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0809FADC:
	.4byte gRam
_0809FAE0:
	.4byte 0x000009DA
_0809FAE4:
	.4byte 0x00001837
_0809FAE8:
	.4byte 0x00000DC5
_0809FAEC:
	.4byte 0x00000968
_0809FAF0:
	.4byte 0x00000DD9
_0809FAF4:
	.4byte 0x00000969
_0809FAF8:
	.4byte 0x00000DE3
_0809FAFC:
	.4byte 0x00000971
_0809FB00:
	.4byte 0x00000E3D
_0809FB04:
	.4byte 0x00001733
_0809FB08:
	.4byte 0x00001714
_0809FB0C:
	.4byte 0x00000B14
_0809FB10:
	.4byte 0x00000956
_0809FB14:
	.4byte 0x00000958
_0809FB18:
	.4byte 0x00000952
	THUMB_FUNC_END sub_0809F9A8

