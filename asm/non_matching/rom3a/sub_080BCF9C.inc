	THUMB_FUNC_START sub_080BCF9C
sub_080BCF9C: @ 0x080BCF9C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r5, _080BD030  @ =gRam
	ldr r0, _080BD034  @ =0x000009AD
	add r4, r5, r0
	ldrb r1, [r4]
	mov r10, r1
	mov r0, #0
	strb r0, [r4]
	bl sub_080CE350
	mov r2, r10
	strb r2, [r4]
	mov r4, #15
	add r6, r5, #0
_080BCFC0:
	ldr r1, _080BD038  @ =0x00000FF2
	add r0, r6, r1
	add r0, r0, r4
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BCFDA
	ldr r2, _080BD03C  @ =0x00000FA2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #4
	bne _080BD06E
_080BCFDA:
	ldr r1, _080BD040  @ =0x000015DC
	add r0, r6, r1
	mov r2, #0
	mov r9, r2
	mov r7, #0
	strb r4, [r0]
	ldr r1, _080BD034  @ =0x000009AD
	add r0, r6, r1
	strb r7, [r0]
	ldr r2, _080BD044  @ =0x00001012
	add r0, r6, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	bl sub_080CF370
	lsl r0, r4, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080C1F70
	ldr r1, _080BD048  @ =0x000010E2
	add r0, r6, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BD01A
	sub r0, r0, #1
	strb r0, [r1]
_080BD01A:
	ldr r2, _080BD03C  @ =0x00000FA2
	add r0, r6, r2
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #9
	bne _080BD04C
	add r0, r5, #0
	bl SpriteActive_MainLong
	b _080BD06E
	.byte 0x00
	.byte 0x00
_080BD030:
	.4byte gRam
_080BD034:
	.4byte 0x000009AD
_080BD038:
	.4byte 0x00000FF2
_080BD03C:
	.4byte 0x00000FA2
_080BD040:
	.4byte 0x000015DC
_080BD044:
	.4byte 0x00001012
_080BD048:
	.4byte 0x000010E2
_080BD04C:
	cmp r0, #4
	bne _080BD068
	ldr r1, _080BD064  @ =gUnknown_03002FC4
	add r0, r4, r1
	ldrb r1, [r0]
	mov r2, #48
	orr r1, r1, r2
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080CE76C
	b _080BD06E
_080BD064:
	.4byte gUnknown_03002FC4
_080BD068:
	strb r7, [r1]
	mov r2, r8
	strb r7, [r2]
_080BD06E:
	sub r4, r4, #1
	cmp r4, #0
	bge _080BCFC0
	ldr r5, _080BD0D4  @ =gRam
	ldr r0, _080BD0D8  @ =0x000009AD
	add r4, r5, r0
	mov r0, #0
	strb r0, [r4]
	bl sub_080CE324
	mov r1, r10
	strb r1, [r4]
	ldr r2, _080BD0DC  @ =0x00000A02
	add r0, r5, r2
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r0, r5, #0
	cmp r1, #100
	bne _080BD0E8
	mov r4, #15
	ldr r1, _080BD0E0  @ =0x00000FF2
	add r7, r0, r1
	ldr r2, _080BD0E4  @ =0x00000F52
	add r6, r0, r2
	sub r1, r1, #48
	add r5, r0, r1
	mov r3, #3
	mov r2, #127
_080BD0AE:
	add r0, r4, r7
	ldrb r0, [r0]
	add r0, r0, #52
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080BD0CA
	add r1, r4, r6
	ldrb r0, [r1]
	cmp r0, #2
	beq _080BD0CA
	strb r3, [r1]
	add r0, r4, r5
	strb r2, [r0]
_080BD0CA:
	sub r4, r4, #1
	cmp r4, #0
	bge _080BD0AE
	b _080BD128
	.byte 0x00
	.byte 0x00
_080BD0D4:
	.4byte gRam
_080BD0D8:
	.4byte 0x000009AD
_080BD0DC:
	.4byte 0x00000A02
_080BD0E0:
	.4byte 0x00000FF2
_080BD0E4:
	.4byte 0x00000F52
_080BD0E8:
	mov r0, #150
	lsl r0, r0, #1
	cmp r1, r0
	bne _080BD128
	mov r4, #15
	ldr r2, _080BD138  @ =0x00001022
	add r6, r5, r2
_080BD0F6:
	ldr r1, _080BD13C  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, #52
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080BD122
	ldr r2, _080BD140  @ =0x00000FA2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080BD122
	add r1, r4, r6
	mov r0, #0
	strb r0, [r1]
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080C2160
_080BD122:
	sub r4, r4, #1
	cmp r4, #0
	bge _080BD0F6
_080BD128:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BD138:
	.4byte 0x00001022
_080BD13C:
	.4byte 0x00000FF2
_080BD140:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080BCF9C

