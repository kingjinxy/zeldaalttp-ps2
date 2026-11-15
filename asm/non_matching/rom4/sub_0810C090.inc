	THUMB_FUNC_START sub_0810C090
sub_0810C090: @ 0x0810C090
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r7, _0810C128  @ =gRam
	ldr r1, _0810C12C  @ =0x00000FC2
	add r0, r7, r1
	add r0, r0, r5
	mov r9, r0
	ldrb r0, [r0]
	mov r8, r0
	cmp r0, #0
	bne _0810C104
	ldr r1, _0810C130  @ =0x00001152
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #144
	strb r1, [r0]
	ldr r1, _0810C134  @ =0x00001142
	add r0, r7, r1
	add r6, r5, r0
	ldrb r4, [r6]
	add r0, r5, #0
	bl sub_080C2C4C
	ldrb r1, [r6]
	eor r4, r4, r1
	mov r0, #128
	and r4, r4, r0
	cmp r4, #0
	beq _0810C104
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0810C104
	mov r0, r8
	strb r0, [r6]
	add r0, r5, #0
	bl sub_080E95CC
	ldr r1, _0810C138  @ =0x00000F52
	add r0, r7, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #32
	mov r1, r9
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #120
	bl sub_080CF140
	add r0, r5, #0
	bl sub_0810C520
_0810C104:
	ldr r0, _0810C128  @ =gRam
	ldr r1, _0810C12C  @ =0x00000FC2
	add r0, r0, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _0810C11A
	add r0, r5, #0
	mov r1, #108
	bl sub_080CF0AC
_0810C11A:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810C128:
	.4byte gRam
_0810C12C:
	.4byte 0x00000FC2
_0810C130:
	.4byte 0x00001152
_0810C134:
	.4byte 0x00001142
_0810C138:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810C090

