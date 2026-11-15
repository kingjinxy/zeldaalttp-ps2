	THUMB_FUNC_START sub_080DB070
sub_080DB070: @ 0x080DB070
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080DB154  @ =gRam
	ldr r1, _080DB158  @ =0x00001172
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080DB15C  @ =0x00000EE2
	add r0, r4, r2
	add r0, r0, r5
	mov r12, r0
	ldrb r0, [r0]
	mov r7, #150
	lsl r7, r7, #4
	add r7, r7, r4
	mov r8, r7
	strb r0, [r7]
	ldr r1, _080DB160  @ =0x00000F02
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080DB164  @ =0x00000961
	add r2, r2, r4
	mov r10, r2
	strb r1, [r2]
	ldr r7, _080DB168  @ =0x00000969
	add r0, r4, r7
	strb r1, [r0]
	ldr r1, _080DB16C  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	str r0, [sp]
	ldrb r0, [r0]
	ldr r2, _080DB170  @ =0x00000964
	add r2, r2, r4
	mov r9, r2
	strb r0, [r2]
	ldr r7, _080DB174  @ =0x00000EF2
	add r0, r4, r7
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080DB178  @ =0x00000965
	add r0, r4, r2
	strb r1, [r0]
	ldr r7, _080DB17C  @ =0x0000096D
	add r0, r4, r7
	strb r1, [r0]
	ldr r1, _080DB180  @ =0x00000F82
	add r0, r4, r1
	add r6, r5, r0
	ldrb r0, [r6]
	add r2, r2, #3
	add r1, r4, r2
	strb r0, [r1]
	ldr r7, _080DB184  @ =0x00001062
	add r0, r4, r7
	add r2, r5, r0
	ldrb r0, [r2]
	ldr r7, _080DB188  @ =0x0000096C
	add r3, r4, r7
	strb r0, [r3]
	mov r7, r8
	ldrh r0, [r7]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #7
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #13
	bhi _080DB11C
	mov r1, r9
	ldrh r0, [r1]
	ldrh r1, [r3]
	sub r0, r0, r1
	add r0, r0, #7
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #13
	bls _080DB194
_080DB11C:
	ldr r2, _080DB18C  @ =0x000010A2
	add r0, r4, r2
	add r6, r5, r0
	ldrb r1, [r6]
	add r0, r5, #0
	bl sub_080C2DCC
	ldr r7, _080DB190  @ =0x00000F12
	add r0, r4, r7
	add r0, r5, r0
	mov r2, r8
	ldrb r1, [r2]
	strb r1, [r0]
	add r7, r7, #16
	add r0, r4, r7
	add r0, r5, r0
	mov r2, r10
	ldrb r1, [r2]
	strb r1, [r0]
	ldrb r0, [r6]
	cmp r0, #63
	bhi _080DB14C
	add r0, r0, #1
	strb r0, [r6]
_080DB14C:
	add r0, r5, #0
	bl Sprite3_Move
	b _080DB1B4
_080DB154:
	.4byte gRam
_080DB158:
	.4byte 0x00001172
_080DB15C:
	.4byte 0x00000EE2
_080DB160:
	.4byte 0x00000F02
_080DB164:
	.4byte 0x00000961
_080DB168:
	.4byte 0x00000969
_080DB16C:
	.4byte 0x00000ED2
_080DB170:
	.4byte 0x00000964
_080DB174:
	.4byte 0x00000EF2
_080DB178:
	.4byte 0x00000965
_080DB17C:
	.4byte 0x0000096D
_080DB180:
	.4byte 0x00000F82
_080DB184:
	.4byte 0x00001062
_080DB188:
	.4byte 0x0000096C
_080DB18C:
	.4byte 0x000010A2
_080DB190:
	.4byte 0x00000F12
_080DB194:
	ldrb r0, [r6]
	mov r7, r12
	strb r0, [r7]
	ldrb r0, [r2]
	ldr r1, [sp]
	strb r0, [r1]
	ldr r2, _080DB1C4  @ =0x00000F52
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #2
	strb r1, [r0]
	ldr r7, _080DB1C8  @ =0x00000FC2
	add r0, r4, r7
	add r0, r5, r0
	mov r1, #39
	strb r1, [r0]
_080DB1B4:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080DB1C4:
	.4byte 0x00000F52
_080DB1C8:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080DB070

