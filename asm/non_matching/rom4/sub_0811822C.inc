	THUMB_FUNC_START sub_0811822C
sub_0811822C: @ 0x0811822C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r4, #15
	ldr r6, _081182AC  @ =gRam
	ldr r0, _081182B0  @ =0x00000B36
	add r0, r0, r6
	mov r10, r0
	ldr r1, _081182B4  @ =0x00001082
	add r1, r1, r6
	mov r9, r1
	mov r7, #240
	lsl r7, r7, #20
_08118250:
	ldr r2, _081182B8  @ =0x00000996
	add r0, r6, r2
	ldrb r0, [r0]
	eor r0, r0, r4
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0811830A
	ldr r1, _081182BC  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _0811830A
	ldr r2, _081182C0  @ =0x00000EA5
	add r0, r6, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _0811830A
	mov r0, r8
	bl sub_08118324
	lsr r5, r7, #24
	add r0, r5, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	add r1, r7, #0
	cmp r0, #0
	beq _0811830A
	ldr r2, _081182C4  @ =0x00000FF2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #13
	beq _081182F0
	cmp r0, #13
	bgt _081182C8
	cmp r0, #11
	beq _081182CE
	b _08118302
_081182AC:
	.4byte gRam
_081182B0:
	.4byte 0x00000B36
_081182B4:
	.4byte 0x00001082
_081182B8:
	.4byte 0x00000996
_081182BC:
	.4byte 0x00000FA2
_081182C0:
	.4byte 0x00000EA5
_081182C4:
	.4byte 0x00000FF2
_081182C8:
	cmp r0, #243
	beq _081182F0
	b _08118302
_081182CE:
	ldr r1, _081182EC  @ =0x000009B2
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0811830A
	mov r2, r10
	ldrb r0, [r2]
	cmp r0, #1
	bne _0811830A
	add r0, r5, #0
	bl sub_081183C0
	b _0811830A
_081182EC:
	.4byte 0x000009B2
_081182F0:
	mov r2, r9
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811830A
	lsr r0, r1, #24
	bl sub_081183C0
	b _0811830A
_08118302:
	lsr r0, r1, #24
	mov r1, #10
	bl sub_080C3FCC
_0811830A:
	mov r0, #255
	lsl r0, r0, #24
	add r7, r7, r0
	sub r4, r4, #1
	cmp r4, #0
	bge _08118250
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0811822C

