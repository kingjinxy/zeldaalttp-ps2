	THUMB_FUNC_START sub_080B3308
sub_080B3308: @ 0x080B3308
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r5, _080B3354  @ =gRam
	ldr r0, _080B3358  @ =0x000009AC
	add r0, r0, r5
	mov r9, r0
	ldrb r7, [r0]
	ldr r1, _080B335C  @ =0x000009AD
	add r1, r1, r5
	mov r8, r1
	ldrb r2, [r1]
	mov r10, r2
	ldr r0, _080B3360  @ =0x00000A4C
	add r6, r5, r0
	ldrh r4, [r6]
	bl sub_08077294
	add r4, r4, #1
	mov r0, #0
	strh r4, [r6]
	mov r1, r9
	strb r7, [r1]
	mov r1, r10
	mov r2, r8
	strb r1, [r2]
	ldr r2, _080B3364  @ =0x0000099D
	add r5, r5, r2
	strb r0, [r5]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B3354:
	.4byte gRam
_080B3358:
	.4byte 0x000009AC
_080B335C:
	.4byte 0x000009AD
_080B3360:
	.4byte 0x00000A4C
_080B3364:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_080B3308

