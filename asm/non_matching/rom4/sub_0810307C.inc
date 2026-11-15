	THUMB_FUNC_START sub_0810307C
sub_0810307C: @ 0x0810307C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08103154  @ =gRam
	ldr r3, _08103158  @ =0x00000996
	add r1, r2, r3
	ldrb r1, [r1]
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	beq _081030A0
	b _0810319E
_081030A0:
	mov r1, #14
	mov r6, #7
	ldr r7, _0810315C  @ =gUnknown_0817B92A
	mov r8, r7
	ldr r0, _08103160  @ =gUnknown_0817B932
	mov r9, r0
_081030AC:
	lsl r0, r1, #24
	asr r4, r0, #24
	ldr r1, _08103164  @ =0x000011D2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r2, [r0]
	mov r10, r2
	cmp r2, #0
	bne _08103194
	strb r6, [r0]
	ldr r3, _08103168  @ =0x000015F8
	add r0, r5, r3
	strb r6, [r0]
	ldr r7, _0810316C  @ =0x000012FE
	add r0, r5, r7
	add r0, r4, r0
	mov r1, #31
	strb r1, [r0]
	bl GetRandomInt
	add r3, r6, #0
	and r3, r3, r0
	ldr r1, _08103170  @ =0x00001622
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _08103174  @ =0x00001623
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	mov r7, r8
	add r2, r3, r7
	orr r1, r1, r0
	ldrb r2, [r2]
	add r1, r1, r2
	add r3, r3, r9
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _08103178  @ =0x0000122C
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r3, _0810317C  @ =0x00001268
	add r0, r5, r3
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	bl GetRandomInt
	add r3, r6, #0
	and r3, r3, r0
	ldr r6, _08103180  @ =0x00001624
	add r0, r5, r6
	ldrb r1, [r0]
	ldr r7, _08103184  @ =0x00001625
	add r0, r5, r7
	ldrb r0, [r0]
	lsl r0, r0, #8
	mov r6, r8
	add r2, r3, r6
	orr r1, r1, r0
	ldrb r2, [r2]
	add r1, r1, r2
	add r3, r3, r9
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r7, _08103188  @ =0x0000120E
	add r0, r5, r7
	add r0, r4, r0
	strb r1, [r0]
	ldr r2, _0810318C  @ =0x0000124A
	add r0, r5, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r3, _08103190  @ =0x00001358
	add r0, r5, r3
	add r0, r4, r0
	mov r6, r10
	strb r6, [r0]
	b _0810319E
	.byte 0x00
	.byte 0x00
_08103154:
	.4byte gRam
_08103158:
	.4byte 0x00000996
_0810315C:
	.4byte gUnknown_0817B92A
_08103160:
	.4byte gUnknown_0817B932
_08103164:
	.4byte 0x000011D2
_08103168:
	.4byte 0x000015F8
_0810316C:
	.4byte 0x000012FE
_08103170:
	.4byte 0x00001622
_08103174:
	.4byte 0x00001623
_08103178:
	.4byte 0x0000122C
_0810317C:
	.4byte 0x00001268
_08103180:
	.4byte 0x00001624
_08103184:
	.4byte 0x00001625
_08103188:
	.4byte 0x0000120E
_0810318C:
	.4byte 0x0000124A
_08103190:
	.4byte 0x00001358
_08103194:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _081030AC
_0810319E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810307C

