	THUMB_FUNC_START sub_0808A8C4
sub_0808A8C4: @ 0x0808A8C4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #4
	ldr r4, _0808A9CC  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldr r2, _0808A9D0  @ =0x00000958
	add r1, r4, r2
	ldrh r2, [r0]
	ldrh r0, [r1]
	sub r2, r2, r0
	add r2, r2, #12
	ldr r3, _0808A9D4  @ =0x0000097C
	add r5, r4, r3
	strh r2, [r5]
	ldr r6, _0808A9D8  @ =0x00000BDC
	add r0, r4, r6
	ldrh r3, [r0]
	sub r1, r2, r3
	mov r7, #189
	lsl r7, r7, #4
	add r0, r4, r7
	strh r1, [r0]
	add r1, r2, r3
	sub r6, r6, #8
	add r0, r4, r6
	strh r1, [r0]
	ldr r7, _0808A9DC  @ =0x000016C4
	add r0, r4, r7
	ldr r6, _0808A9E0  @ =0x00000952
	add r1, r4, r6
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #8
	ldr r7, _0808A9E4  @ =0x00000BC8
	add r1, r4, r7
	strh r0, [r1]
	ldr r1, _0808A9E8  @ =0x00000BDA
	add r0, r4, r1
	strh r3, [r0]
	lsl r0, r2, #1
	ldr r3, _0808A9EC  @ =0x0000096C
	add r1, r4, r3
	strh r0, [r1]
	lsl r2, r2, #17
	asr r2, r2, #16
	cmp r2, #159
	bgt _0808A930
	mov r0, #160
	strh r0, [r1]
_0808A930:
	ldrh r0, [r1]
	ldrh r2, [r5]
	sub r0, r0, r2
	ldr r6, _0808A9F0  @ =0x00000974
	add r1, r4, r6
	strh r0, [r1]
	sub r2, r2, r0
	ldr r7, _0808A9F4  @ =0x00000968
	add r0, r4, r7
	strh r2, [r0]
	add r6, r4, #0
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r6
	mov r9, r0
_0808A94E:
	ldr r0, _0808A9F8  @ =0x0000F0FC
	mov r2, r9
	strh r0, [r2]
	ldr r3, _0808A9EC  @ =0x0000096C
	add r0, r6, r3
	ldr r7, _0808A9FC  @ =0x00000BD4
	add r1, r6, r7
	mov r3, #0
	ldrsh r2, [r0, r3]
	mov r7, #0
	ldrsh r0, [r1, r7]
	cmp r2, r0
	bge _0808A97C
	ldr r0, _0808A9E8  @ =0x00000BDA
	add r2, r6, r0
	ldrh r1, [r2]
	cmp r1, #0
	beq _0808A976
	sub r0, r1, #1
	strh r0, [r2]
_0808A976:
	add r0, r1, #0
	bl sub_0808A7E8
_0808A97C:
	ldr r5, _0808A9CC  @ =gRam
	ldr r1, _0808A9F4  @ =0x00000968
	add r3, r5, r1
	mov r2, #0
	ldrsh r1, [r3, r2]
	cmp r1, #160
	bhi _0808A996
	lsl r0, r1, #1
	ldr r7, _0808AA00  @ =gUnknown_02001600
	add r0, r0, r7
	mov r2, r9
	ldrh r1, [r2]
	strh r1, [r0]
_0808A996:
	ldr r7, _0808A9EC  @ =0x0000096C
	add r4, r5, r7
	mov r0, #0
	ldrsh r1, [r4, r0]
	cmp r1, #160
	bhi _0808A9AE
	lsl r0, r1, #1
	ldr r1, _0808AA00  @ =gUnknown_02001600
	add r0, r0, r1
	mov r2, r9
	ldrh r1, [r2]
	strh r1, [r0]
_0808A9AE:
	ldr r7, _0808A9D4  @ =0x0000097C
	add r0, r5, r7
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldrh r2, [r3]
	mov r7, #0
	ldrsh r0, [r3, r7]
	cmp r1, r0
	beq _0808AA04
	add r0, r2, #1
	strh r0, [r3]
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
	b _0808A94E
_0808A9CC:
	.4byte gRam
_0808A9D0:
	.4byte 0x00000958
_0808A9D4:
	.4byte 0x0000097C
_0808A9D8:
	.4byte 0x00000BDC
_0808A9DC:
	.4byte 0x000016C4
_0808A9E0:
	.4byte 0x00000952
_0808A9E4:
	.4byte 0x00000BC8
_0808A9E8:
	.4byte 0x00000BDA
_0808A9EC:
	.4byte 0x0000096C
_0808A9F0:
	.4byte 0x00000974
_0808A9F4:
	.4byte 0x00000968
_0808A9F8:
	.4byte 0x0000F0FC
_0808A9FC:
	.4byte 0x00000BD4
_0808AA00:
	.4byte gUnknown_02001600
_0808AA04:
	ldr r0, _0808AA50  @ =0x00000BDC
	add r2, r5, r0
	ldr r0, _0808AA54  @ =gUnknown_081536BE
	ldr r1, _0808AA58  @ =0x00000BDE
	add r4, r5, r1
	ldrh r1, [r4]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldrh r2, [r2]
	ldr r0, _0808AA5C  @ =gUnknown_081536C6
	add r1, r1, r0
	mov r6, #0
	ldrsh r0, [r1, r6]
	cmp r2, r0
	bne _0808AAEE
	bl sub_0806BDA4
	ldrh r0, [r4]
	cmp r0, #0
	bne _0808AA6C
	mov r7, #152
	lsl r7, r7, #4
	add r1, r5, r7
	mov r0, #128
	strb r0, [r1]
	ldr r0, _0808AA60  @ =0xF0FCF0FC
	str r0, [sp]
	ldr r1, _0808AA64  @ =gUnknown_02001600
	ldr r2, _0808AA68  @ =0x01000080
	mov r0, sp
	bl CpuFastSet
	b _0808AA7A
_0808AA50:
	.4byte 0x00000BDC
_0808AA54:
	.4byte gUnknown_081536BE
_0808AA58:
	.4byte 0x00000BDE
_0808AA5C:
	.4byte gUnknown_081536C6
_0808AA60:
	.4byte 0xF0FCF0FC
_0808AA64:
	.4byte gUnknown_02001600
_0808AA68:
	.4byte 0x01000080
_0808AA6C:
	ldr r0, _0808AAFC  @ =0x00FC00FC
	str r0, [sp]
	ldr r1, _0808AB00  @ =gUnknown_02001600
	ldr r2, _0808AB04  @ =0x01000080
	mov r0, sp
	bl CpuFastSet
_0808AA7A:
	ldr r1, _0808AB08  @ =gRam
	ldr r0, _0808AB0C  @ =0x000009E8
	add r2, r1, r0
	mov r3, #0
	mov r0, #0
	strh r0, [r2]
	ldr r2, _0808AB10  @ =0x000009AD
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _0808AB14  @ =0x000009AC
	add r0, r1, r3
	ldrb r0, [r0]
	add r2, r1, #0
	cmp r0, #7
	beq _0808AA9C
	cmp r0, #16
	bne _0808AAD6
_0808AA9C:
	ldr r6, _0808AB18  @ =0x000009B2
	add r0, r2, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0808AAC4
	ldr r7, _0808AB1C  @ =0x000009C6
	add r0, r2, r7
	ldrh r0, [r0]
	cmp r0, #67
	beq _0808AABC
	cmp r0, #69
	beq _0808AABC
	cmp r0, #71
	bne _0808AAC4
_0808AABC:
	ldr r0, _0808AB20  @ =0x00000A3E
	add r1, r2, r0
	mov r0, #6
	strb r0, [r1]
_0808AAC4:
	ldr r1, _0808AB24  @ =0x00000A46
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r0, _0808AB28  @ =0x0000FFFF
	cmp r1, r0
	beq _0808AAD6
	ldr r3, _0808AB2C  @ =0x00000A3C
	add r0, r2, r3
	strh r1, [r0]
_0808AAD6:
	ldr r6, _0808AB30  @ =0x00000A1A
	add r0, r2, r6
	ldrh r0, [r0]
	ldr r7, _0808AB14  @ =0x000009AC
	add r1, r2, r7
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #6
	bne _0808AAEE
	bl sub_080CBCD8
_0808AAEE:
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0808AAFC:
	.4byte 0x00FC00FC
_0808AB00:
	.4byte gUnknown_02001600
_0808AB04:
	.4byte 0x01000080
_0808AB08:
	.4byte gRam
_0808AB0C:
	.4byte 0x000009E8
_0808AB10:
	.4byte 0x000009AD
_0808AB14:
	.4byte 0x000009AC
_0808AB18:
	.4byte 0x000009B2
_0808AB1C:
	.4byte 0x000009C6
_0808AB20:
	.4byte 0x00000A3E
_0808AB24:
	.4byte 0x00000A46
_0808AB28:
	.4byte 0x0000FFFF
_0808AB2C:
	.4byte 0x00000A3C
_0808AB30:
	.4byte 0x00000A1A
	THUMB_FUNC_END sub_0808A8C4

