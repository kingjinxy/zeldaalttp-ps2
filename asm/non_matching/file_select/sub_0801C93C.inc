	THUMB_FUNC_START sub_0801C93C
sub_0801C93C: @ 0x0801C93C
	push {r4,r5,lr}
	add r5, r0, #0
	mov r1, #192
	lsl r1, r1, #5
	bl sub_08003F1C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	beq _0801C95A
	cmp r0, #1
	beq _0801C980
	add r4, r5, #0
	add r4, r4, #42
	b _0801C996
_0801C95A:
	mov r0, #6
	strb r0, [r5, #20]
	add r1, r5, #0
	add r1, r1, #112
	mov r0, #150
	lsl r0, r0, #2
	strh r0, [r1]
	add r4, r5, #0
	add r4, r4, #42
	mov r0, #5
	strb r0, [r4]
	add r0, r5, #0
	mov r1, #5
	bl sub_08003870
	mov r0, #49
	bl sub_08003DFC
	b _0801C996
_0801C980:
	add r4, r5, #0
	add r4, r4, #42
	mov r0, #4
	strb r0, [r4]
	add r0, r5, #0
	mov r1, #4
	bl sub_08003870
	mov r0, #49
	bl sub_08003DFC
_0801C996:
	ldrb r0, [r4]
	cmp r0, #4
	bne _0801C9AE
	ldr r0, [r5, #16]
	cmp r0, #0
	bge _0801C9AE
	mov r0, #3
	strb r0, [r4]
	add r0, r5, #0
	mov r1, #3
	bl sub_08003870
_0801C9AE:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C93C

