	THUMB_FUNC_START sub_0811730C
sub_0811730C: @ 0x0811730C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _08117358  @ =gRam
	ldr r2, _0811735C  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	bne _0811736E
	ldr r1, _08117360  @ =0x00000DBB
	add r0, r4, r1
	add r2, r3, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0811736E
	mov r0, #5
	strb r0, [r2]
	mov r1, #9
_0811733E:
	ldr r2, _08117364  @ =0x00000E15
	add r0, r4, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08117368
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r3, #0
	bl sub_08117374
	b _0811736E
	.byte 0x00
	.byte 0x00
_08117358:
	.4byte gRam
_0811735C:
	.4byte 0x000009AD
_08117360:
	.4byte 0x00000DBB
_08117364:
	.4byte 0x00000E15
_08117368:
	sub r1, r1, #1
	cmp r1, #0
	bge _0811733E
_0811736E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0811730C

