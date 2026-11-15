	THUMB_FUNC_START sub_08115424
sub_08115424: @ 0x08115424
	push {r4,lr}
	ldr r3, _08115490  @ =gRam
	ldr r0, _08115494  @ =0x00001757
	add r2, r3, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _081154A4
	mov r0, #0
	strb r0, [r2]
	ldr r1, _08115498  @ =0x00001664
	add r0, r3, r1
	ldrh r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	mov r2, #182
	lsl r2, r2, #5
	add r0, r3, r2
	mov r4, #0
	ldrsh r2, [r0, r4]
	cmp r1, r2
	bge _081154A4
	add r0, r1, #0
	add r0, r0, #20
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, r2
	blt _081154A4
	ldr r1, _0811549C  @ =0x00001666
	add r0, r3, r1
	ldrh r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r2, _081154A0  @ =0x000016C4
	add r0, r3, r2
	mov r3, #0
	ldrsh r2, [r0, r3]
	cmp r1, r2
	bge _081154A4
	add r0, r1, #0
	add r0, r0, #20
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, r2
	blt _081154A4
	mov r0, #0
	b _081154A6
_08115490:
	.4byte gRam
_08115494:
	.4byte 0x00001757
_08115498:
	.4byte 0x00001664
_0811549C:
	.4byte 0x00001666
_081154A0:
	.4byte 0x000016C4
_081154A4:
	mov r0, #1
_081154A6:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08115424

