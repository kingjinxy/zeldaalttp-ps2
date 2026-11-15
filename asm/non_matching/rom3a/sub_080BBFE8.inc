	THUMB_FUNC_START sub_080BBFE8
sub_080BBFE8: @ 0x080BBFE8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r5, _080BC080  @ =gRam
	ldr r0, _080BC084  @ =0x000009AD
	add r4, r5, r0
	ldrb r1, [r4]
	mov r9, r1
	ldr r2, _080BC088  @ =0x000016C4
	add r6, r5, r2
	ldrh r3, [r6]
	str r3, [sp]
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r5
	mov r8, r0
	ldrh r1, [r0]
	str r1, [sp, #4]
	mov r0, #0
	strb r0, [r4]
	bl sub_080CE350
	mov r2, r9
	strb r2, [r4]
	ldr r0, _080BC08C  @ =0x00000CBC
	strh r0, [r6]
	mov r0, #226
	lsl r0, r0, #4
	mov r3, r8
	strh r0, [r3]
	mov r6, #15
	mov r8, r5
	ldr r0, _080BC090  @ =0x00000FA2
	add r0, r0, r8
	mov r10, r0
_080BC034:
	ldr r0, _080BC094  @ =0x00000FF2
	add r0, r0, r8
	add r7, r6, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080BC0B0
	ldr r0, _080BC098  @ =0x000015DC
	add r0, r0, r8
	mov r5, #0
	strb r6, [r0]
	ldr r0, _080BC084  @ =0x000009AD
	add r0, r0, r8
	strb r5, [r0]
	ldr r0, _080BC09C  @ =0x00001012
	add r0, r0, r8
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	bl sub_080CF370
	lsl r0, r6, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C1F70
	mov r2, r10
	add r1, r6, r2
	ldrb r0, [r1]
	cmp r0, #9
	bne _080BC0A0
	add r0, r4, #0
	bl SpriteActive_MainLong
	b _080BC0B0
	.byte 0x00
	.byte 0x00
_080BC080:
	.4byte gRam
_080BC084:
	.4byte 0x000009AD
_080BC088:
	.4byte 0x000016C4
_080BC08C:
	.4byte 0x00000CBC
_080BC090:
	.4byte 0x00000FA2
_080BC094:
	.4byte 0x00000FF2
_080BC098:
	.4byte 0x000015DC
_080BC09C:
	.4byte 0x00001012
_080BC0A0:
	cmp r0, #6
	bne _080BC0AC
	add r0, r4, #0
	bl sub_080C6DC8
	b _080BC0B0
_080BC0AC:
	strb r5, [r1]
	strb r5, [r7]
_080BC0B0:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BC034
	ldr r4, _080BC0EC  @ =gRam
	ldr r3, _080BC0F0  @ =0x000016C4
	add r0, r4, r3
	mov r1, #0
	mov r2, sp
	ldrh r2, [r2]
	strh r2, [r0]
	sub r3, r3, #4
	add r0, r4, r3
	mov r2, sp
	ldrh r2, [r2, #4]
	strh r2, [r0]
	ldr r3, _080BC0F4  @ =0x000009AD
	add r4, r4, r3
	strb r1, [r4]
	bl sub_080CE324
	mov r0, r9
	strb r0, [r4]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BC0EC:
	.4byte gRam
_080BC0F0:
	.4byte 0x000016C4
_080BC0F4:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080BBFE8

