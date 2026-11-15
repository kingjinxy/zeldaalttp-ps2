	THUMB_FUNC_START sub_0809A670
sub_0809A670: @ 0x0809A670
	push {r4-r7,lr}
	ldr r0, _0809A688  @ =gRam
	ldr r2, _0809A68C  @ =0x000009B2
	add r1, r0, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r5, r0, #0
	cmp r1, #0
	bne _0809A690
	mov r2, #2
	b _0809A6A2
_0809A688:
	.4byte gRam
_0809A68C:
	.4byte 0x000009B2
_0809A690:
	ldr r7, _0809A728  @ =0x000009B5
	add r0, r5, r7
	ldrb r2, [r0]
	ldr r1, _0809A72C  @ =0x00000B22
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _0809A6A2
	mov r2, #0
_0809A6A2:
	add r3, r5, #0
	mov r7, #150
	lsl r7, r7, #4
	add r4, r3, r7
	strb r2, [r4]
	ldr r0, _0809A730  @ =gUnknown_08167F99
	add r0, r2, r0
	ldrb r2, [r0]
	ldr r1, _0809A734  @ =0x00001726
	add r0, r3, r1
	ldrb r1, [r0]
	mov r6, #1
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809A6C8
	neg r0, r2
	lsl r0, r0, #24
	lsr r2, r0, #24
_0809A6C8:
	ldr r7, _0809A738  @ =0x000016CE
	add r0, r3, r7
	strb r2, [r0]
	ldr r0, _0809A73C  @ =0x000016CD
	add r1, r3, r0
	mov r0, #0
	strb r0, [r1]
	ldr r2, _0809A740  @ =gUnknown_08167F9C
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r0, r0, r2
	ldrb r1, [r0]
	add r7, r7, #1
	add r0, r3, r7
	strb r1, [r0]
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r2, _0809A744  @ =0x0000174C
	add r0, r3, r2
	strh r1, [r0]
	ldr r1, _0809A748  @ =gUnknown_08167F9F
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r0, r0, r1
	ldrb r1, [r0]
	add r7, r7, #41
	add r0, r3, r7
	strb r1, [r0]
	ldr r0, _0809A74C  @ =0x00001702
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #2
	beq _0809A718
	strb r6, [r1]
	add r2, r2, #165
	add r1, r3, r2
	mov r0, #0
	strb r0, [r1]
_0809A718:
	ldr r7, _0809A750  @ =0x00001718
	add r1, r5, r7
	mov r0, #6
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809A728:
	.4byte 0x000009B5
_0809A72C:
	.4byte 0x00000B22
_0809A730:
	.4byte gUnknown_08167F99
_0809A734:
	.4byte 0x00001726
_0809A738:
	.4byte 0x000016CE
_0809A73C:
	.4byte 0x000016CD
_0809A740:
	.4byte gUnknown_08167F9C
_0809A744:
	.4byte 0x0000174C
_0809A748:
	.4byte gUnknown_08167F9F
_0809A74C:
	.4byte 0x00001702
_0809A750:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809A670

