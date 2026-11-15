	THUMB_FUNC_START sub_0812AC0C
sub_0812AC0C: @ 0x0812AC0C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _0812AD78  @ =gUnknown_03000164
	mov r0, #0
	str r0, [r1]
	ldr r2, _0812AD7C  @ =gUnknown_03001AA8
	ldr r0, _0812AD80  @ =gUnknown_03001760
	mov r12, r0
	ldr r3, _0812AD84  @ =gUnknown_03000174
	ldr r5, _0812AD88  @ =gUnknown_0300016C
	ldr r1, _0812AD8C  @ =gUnknown_03000168
	mov r8, r1
	ldr r0, _0812AD90  @ =gUnknown_03000170
	mov r9, r0
	ldr r1, _0812AD94  @ =gUnknown_03000175
	mov r10, r1
	mov r1, #0
	add r0, r2, #1
	mov r4, #3
_0812AC38:
	strb r1, [r0]
	strb r1, [r0, #3]
	strb r1, [r0, #4]
	strb r1, [r0, #5]
	strb r1, [r0, #6]
	add r0, r0, #120
	sub r4, r4, #1
	cmp r4, #0
	bge _0812AC38
	mov r4, #4
	mov r0, #1
	strb r0, [r2]
	add r1, r2, #0
	add r1, r1, #120
	mov r0, #2
	strb r0, [r1]
	add r1, r1, #120
	mov r0, #3
	strb r0, [r1]
	mov r1, #180
	lsl r1, r1, #1
	add r0, r2, r1
	strb r4, [r0]
	mov r1, #0
	ldr r0, _0812AD80  @ =gUnknown_03001760
	mov r4, #6
_0812AC6C:
	strb r1, [r0, #1]
	strb r1, [r0]
	strb r1, [r0, #4]
	strb r1, [r0, #5]
	strb r1, [r0, #6]
	strb r1, [r0, #7]
	add r0, r0, #120
	sub r4, r4, #1
	cmp r4, #0
	bge _0812AC6C
	mov r4, #7
	strb r4, [r3]
	mov r0, r12
	str r0, [r5]
	add r0, r0, #120
	mov r1, r12
	add r1, r1, #108
	mov r2, #0
	strb r0, [r1]
	lsr r1, r0, #8
	mov r3, r12
	add r3, r3, #109
	strb r1, [r3]
	lsr r1, r0, #16
	add r3, r3, #1
	strb r1, [r3]
	lsr r0, r0, #24
	mov r1, r12
	add r1, r1, #111
	strb r0, [r1]
	mov r0, r12
	add r0, r0, #104
	strb r2, [r0]
	add r0, r0, #1
	strb r2, [r0]
	add r0, r0, #1
	strb r2, [r0]
	add r0, r0, #1
	strb r2, [r0]
	mov r7, r12
	mov r5, #255
	mov r2, r12
	add r2, r2, #224
	mov r3, r12
	mov r6, #120
	mov r4, #4
_0812ACC8:
	add r1, r7, #0
	add r1, r1, #120
	add r1, r6, r1
	add r0, r1, #0
	and r0, r0, r5
	strb r0, [r2, #4]
	lsr r0, r1, #8
	and r0, r0, r5
	strb r0, [r2, #5]
	lsr r0, r1, #16
	and r0, r0, r5
	strb r0, [r2, #6]
	lsr r1, r1, #24
	strb r1, [r2, #7]
	add r0, r3, #0
	and r0, r0, r5
	strb r0, [r2]
	lsr r0, r3, #8
	and r0, r0, r5
	strb r0, [r2, #1]
	lsr r0, r3, #16
	and r0, r0, r5
	strb r0, [r2, #2]
	lsr r0, r3, #24
	strb r0, [r2, #3]
	add r2, r2, #120
	add r3, r3, #120
	add r6, r6, #120
	sub r4, r4, #1
	cmp r4, #0
	bge _0812ACC8
	mov r3, #0
	mov r1, #150
	lsl r1, r1, #2
	add r1, r1, r12
	mov r0, #206
	lsl r0, r0, #2
	add r0, r0, r12
	strb r1, [r0]
	lsr r2, r1, #8
	ldr r0, _0812AD98  @ =0x00000339
	add r0, r0, r12
	strb r2, [r0]
	lsr r2, r1, #16
	ldr r0, _0812AD9C  @ =0x0000033A
	add r0, r0, r12
	strb r2, [r0]
	lsr r1, r1, #24
	ldr r0, _0812ADA0  @ =0x0000033B
	add r0, r0, r12
	strb r1, [r0]
	mov r0, #207
	lsl r0, r0, #2
	add r0, r0, r12
	strb r3, [r0]
	ldr r0, _0812ADA4  @ =0x0000033D
	add r0, r0, r12
	strb r3, [r0]
	ldr r0, _0812ADA8  @ =0x0000033E
	add r0, r0, r12
	strb r3, [r0]
	ldr r0, _0812ADAC  @ =0x0000033F
	add r0, r0, r12
	strb r3, [r0]
	mov r1, r8
	str r3, [r1]
	mov r0, r9
	str r3, [r0]
	mov r1, r10
	strb r3, [r1]
	mov r0, #18
	ldr r1, _0812ADB0  @ =gUnknown_03000176
	strb r0, [r1]
	mov r0, #16
	ldr r1, _0812ADB4  @ =gUnknown_03000160
	strb r0, [r1]
	ldr r1, _0812ADB8  @ =gUnknown_03000177
	strb r0, [r1]
	ldr r0, _0812ADBC  @ =gUnknown_03000178
	strb r3, [r0]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812AD78:
	.4byte gUnknown_03000164
_0812AD7C:
	.4byte gUnknown_03001AA8
_0812AD80:
	.4byte gUnknown_03001760
_0812AD84:
	.4byte gUnknown_03000174
_0812AD88:
	.4byte gUnknown_0300016C
_0812AD8C:
	.4byte gUnknown_03000168
_0812AD90:
	.4byte gUnknown_03000170
_0812AD94:
	.4byte gUnknown_03000175
_0812AD98:
	.4byte 0x00000339
_0812AD9C:
	.4byte 0x0000033A
_0812ADA0:
	.4byte 0x0000033B
_0812ADA4:
	.4byte 0x0000033D
_0812ADA8:
	.4byte 0x0000033E
_0812ADAC:
	.4byte 0x0000033F
_0812ADB0:
	.4byte gUnknown_03000176
_0812ADB4:
	.4byte gUnknown_03000160
_0812ADB8:
	.4byte gUnknown_03000177
_0812ADBC:
	.4byte gUnknown_03000178
	THUMB_FUNC_END sub_0812AC0C

