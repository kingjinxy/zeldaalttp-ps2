	THUMB_FUNC_START sub_08119EF0
sub_08119EF0: @ 0x08119EF0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r2, _08119F24  @ =gRam
	ldr r3, _08119F28  @ =0x00001732
	add r1, r2, r3
	strb r0, [r1]
	mov r0, #9
	mov r8, r0
	add r6, r2, #0
	ldr r1, _08119F2C  @ =0x00000E15
	add r2, r6, r1
_08119F08:
	mov r3, r8
	add r1, r3, r2
	ldrb r7, [r1]
	cmp r7, #0
	beq _08119F30
	mov r0, r8
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r8, r1
	cmp r0, #0
	bge _08119F08
	b _08119FDA
	.byte 0x00
	.byte 0x00
_08119F24:
	.4byte gRam
_08119F28:
	.4byte 0x00001732
_08119F2C:
	.4byte 0x00000E15
_08119F30:
	mov r0, #60
	strb r0, [r1]
	ldr r2, _08119FE4  @ =0x00000E29
	add r0, r6, r2
	add r0, r0, r8
	strb r7, [r0]
	ldr r3, _08119FE8  @ =0x00000E33
	add r0, r6, r3
	add r0, r0, r8
	mov r1, #4
	strb r1, [r0]
	ldr r1, _08119FEC  @ =0x00000E47
	add r0, r6, r1
	add r0, r0, r8
	mov r2, #161
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	bl GetRandomInt
	mov r3, #151
	lsl r3, r3, #4
	add r5, r6, r3
	strb r0, [r5]
	ldr r1, _08119FF0  @ =0x00001732
	add r0, r6, r1
	ldrb r4, [r0]
	add r0, r4, #0
	bl sub_080ABAD4
	ldr r2, _08119FF4  @ =0x00000975
	add r0, r6, r2
	strb r7, [r0]
	ldrb r1, [r5]
	mov r0, #7
	and r0, r0, r1
	ldr r3, _08119FF8  @ =0x00000968
	add r5, r6, r3
	strb r0, [r5]
	sub r2, r2, #12
	add r0, r6, r2
	strb r7, [r0]
	mov r0, #112
	and r0, r0, r1
	lsr r0, r0, #4
	add r3, r3, #4
	add r3, r3, r6
	mov r12, r3
	strb r0, [r3]
	ldr r1, _08119FFC  @ =0x0000096D
	add r0, r6, r1
	strb r7, [r0]
	ldr r2, _0811A000  @ =0x00000E3D
	add r0, r6, r2
	add r4, r4, r0
	ldrb r1, [r4]
	mov r2, #3
	mov r0, #150
	lsl r0, r0, #4
	add r3, r6, r0
	ldr r0, _0811A004  @ =gUnknown_0817F4EC
	and r2, r2, r1
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r5]
	ldrh r0, [r0]
	add r1, r1, r0
	ldrh r0, [r3]
	add r0, r0, r1
	strh r0, [r3]
	ldr r1, _0811A008  @ =0x00000964
	add r3, r6, r1
	ldr r0, _0811A00C  @ =gUnknown_0817F4F4
	add r2, r2, r0
	mov r0, r12
	ldrh r1, [r0]
	ldrh r2, [r2]
	add r1, r1, r2
	ldrh r0, [r3]
	add r0, r0, r1
	strh r0, [r3]
	mov r0, r8
	bl sub_080ABA78
_08119FDA:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08119FE4:
	.4byte 0x00000E29
_08119FE8:
	.4byte 0x00000E33
_08119FEC:
	.4byte 0x00000E47
_08119FF0:
	.4byte 0x00001732
_08119FF4:
	.4byte 0x00000975
_08119FF8:
	.4byte 0x00000968
_08119FFC:
	.4byte 0x0000096D
_0811A000:
	.4byte 0x00000E3D
_0811A004:
	.4byte gUnknown_0817F4EC
_0811A008:
	.4byte 0x00000964
_0811A00C:
	.4byte gUnknown_0817F4F4
	THUMB_FUNC_END sub_08119EF0

