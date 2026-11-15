	THUMB_FUNC_START sub_080C9268
sub_080C9268: @ 0x080C9268
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r10, r1
	ldr r7, _080C92F4  @ =gRam
	ldr r1, _080C92F8  @ =0x00001012
	add r5, r7, r1
	add r5, r0, r5
	ldrb r2, [r5]
	mov r8, r2
	ldr r3, _080C92FC  @ =0x00001132
	add r4, r7, r3
	add r4, r0, r4
	ldrb r6, [r4]
	mov r1, #0
	mov r9, r1
	mov r1, #128
	strb r1, [r5]
	mov r1, #7
	strb r1, [r4]
	bl sub_080C500C
	lsl r0, r0, #24
	mov r2, r8
	strb r2, [r5]
	strb r6, [r4]
	cmp r0, #0
	beq _080C9320
	bl sub_080AF16C
	ldr r3, _080C9300  @ =0x00001804
	add r0, r7, r3
	mov r1, r9
	strb r1, [r0]
	ldr r2, _080C9304  @ =0x00001719
	add r0, r7, r2
	strb r1, [r0]
	ldr r3, _080C9308  @ =0x00001702
	add r0, r7, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C9320
	ldr r1, _080C930C  @ =0x00001AE8
	add r0, r7, r1
	mov r1, #0
	mov r2, r10
	strh r2, [r0]
	ldr r3, _080C9310  @ =0x00001AD0
	add r0, r7, r3
	strb r1, [r0]
	ldr r0, _080C9314  @ =0x000009AD
	add r1, r7, r0
	mov r0, #2
	strb r0, [r1]
	ldr r1, _080C9318  @ =0x000009AC
	add r2, r7, r1
	ldrb r1, [r2]
	ldr r3, _080C931C  @ =0x00000A1A
	add r0, r7, r3
	strh r1, [r0]
	mov r0, #14
	strb r0, [r2]
	mov r0, #1
	b _080C9322
_080C92F4:
	.4byte gRam
_080C92F8:
	.4byte 0x00001012
_080C92FC:
	.4byte 0x00001132
_080C9300:
	.4byte 0x00001804
_080C9304:
	.4byte 0x00001719
_080C9308:
	.4byte 0x00001702
_080C930C:
	.4byte 0x00001AE8
_080C9310:
	.4byte 0x00001AD0
_080C9314:
	.4byte 0x000009AD
_080C9318:
	.4byte 0x000009AC
_080C931C:
	.4byte 0x00000A1A
_080C9320:
	mov r0, #0
_080C9322:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C9268

