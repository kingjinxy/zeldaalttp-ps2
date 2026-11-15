	THUMB_FUNC_START sub_0809B58C
sub_0809B58C: @ 0x0809B58C
	push {r4-r7,lr}
	ldr r0, _0809B5B4  @ =gRam
	ldr r2, _0809B5B8  @ =0x000009B2
	add r1, r0, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r6, r0, #0
	cmp r1, #0
	bne _0809B5A4
	bl sub_0808B1FC
_0809B5A4:
	ldr r3, _0809B5BC  @ =0x00001702
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809B5C0
	bl sub_0809D478
	b _0809B7DC
_0809B5B4:
	.4byte gRam
_0809B5B8:
	.4byte 0x000009B2
_0809B5BC:
	.4byte 0x00001702
_0809B5C0:
	ldr r4, _0809B604  @ =0x00001808
	add r3, r6, r4
	ldrb r0, [r3]
	cmp r0, #0
	beq _0809B68C
	ldr r7, _0809B608  @ =0x000016E8
	add r4, r6, r7
	ldrb r0, [r4]
	cmp r0, #0
	bne _0809B634
	ldr r1, _0809B60C  @ =0x00000544
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0809B61C
	strb r2, [r3]
	ldr r3, _0809B610  @ =0x00001796
	add r0, r6, r3
	strb r2, [r0]
	ldr r4, _0809B614  @ =0x00001794
	add r1, r6, r4
	mov r0, #2
	strb r0, [r1]
	add r7, r7, #29
	add r0, r6, r7
	strb r2, [r0]
	ldr r1, _0809B618  @ =0x00001718
	add r0, r6, r1
	strb r2, [r0]
	b _0809B6B6
_0809B604:
	.4byte 0x00001808
_0809B608:
	.4byte 0x000016E8
_0809B60C:
	.4byte 0x00000544
_0809B610:
	.4byte 0x00001796
_0809B614:
	.4byte 0x00001794
_0809B618:
	.4byte 0x00001718
_0809B61C:
	ldr r2, _0809B6C4  @ =0x00000545
	add r0, r6, r2
	ldrb r0, [r0]
	mov r2, #4
	and r2, r2, r0
	cmp r2, #0
	bne _0809B62C
	b _0809B796
_0809B62C:
	strb r2, [r4]
	mov r0, #58
	bl sub_0809E43C
_0809B634:
	ldr r3, _0809B6C8  @ =gRam
	ldr r7, _0809B6CC  @ =0x00001794
	add r4, r3, r7
	ldrb r0, [r4]
	sub r0, r0, #1
	mov r5, #0
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0809B64A
	b _0809B796
_0809B64A:
	ldr r0, _0809B6D0  @ =0x00001796
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r2, [r1]
	ldr r0, _0809B6D4  @ =gUnknown_08168C68
	add r0, r2, r0
	ldrb r0, [r0]
	sub r7, r7, #1
	add r6, r3, r7
	strb r0, [r6]
	ldr r0, _0809B6D8  @ =gUnknown_08168C61
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r4]
	cmp r2, #7
	beq _0809B670
	b _0809B796
_0809B670:
	ldr r2, _0809B6DC  @ =0x00001808
	add r0, r3, r2
	strb r5, [r0]
	strb r5, [r1]
	mov r0, #2
	strb r0, [r4]
	strb r5, [r6]
	ldr r4, _0809B6E0  @ =0x00001791
	add r1, r3, r4
	mov r0, #1
	strb r0, [r1]
	sub r7, r7, #1
	add r0, r3, r7
	strb r5, [r0]
_0809B68C:
	ldr r4, _0809B6C8  @ =gRam
	ldr r1, _0809B6E4  @ =0x000016FA
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #9
	and r0, r0, r1
	add r6, r4, #0
	cmp r0, #0
	bne _0809B72C
	ldr r2, _0809B6D0  @ =0x00001796
	add r5, r4, r2
	ldrb r0, [r5]
	cmp r0, #9
	bne _0809B6F0
	ldr r3, _0809B6E8  @ =0x00000547
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0809B79A
_0809B6B6:
	ldr r4, _0809B6EC  @ =0x00001718
	add r1, r6, r4
	mov r0, #0
	strb r0, [r1]
	bl sub_0809D5CC
	b _0809B7DC
_0809B6C4:
	.4byte 0x00000545
_0809B6C8:
	.4byte gRam
_0809B6CC:
	.4byte 0x00001794
_0809B6D0:
	.4byte 0x00001796
_0809B6D4:
	.4byte gUnknown_08168C68
_0809B6D8:
	.4byte gUnknown_08168C61
_0809B6DC:
	.4byte 0x00001808
_0809B6E0:
	.4byte 0x00001791
_0809B6E4:
	.4byte 0x000016FA
_0809B6E8:
	.4byte 0x00000547
_0809B6EC:
	.4byte 0x00001718
_0809B6F0:
	mov r0, #0
	mov r1, #30
	bl sub_080AE5EC
	ldr r7, _0809B74C  @ =0x00001794
	add r1, r4, r7
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809B76C
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldrb r2, [r5]
	mov r0, #2
	strb r0, [r1]
	ldr r0, _0809B750  @ =gUnknown_08167FBE
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _0809B754  @ =0x00001793
	add r0, r4, r3
	strb r1, [r0]
	sub r7, r7, #199
	add r1, r4, r7
	mov r0, #48
	strb r0, [r1]
	cmp r2, #9
	bne _0809B76C
_0809B72C:
	ldr r1, _0809B758  @ =gRam
	ldr r2, _0809B75C  @ =0x000016D5
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _0809B760  @ =0x00001791
	add r0, r1, r3
	strb r2, [r0]
	ldr r4, _0809B764  @ =0x00001705
	add r0, r1, r4
	strb r2, [r0]
	ldr r7, _0809B768  @ =0x00001718
	add r1, r1, r7
	strb r2, [r1]
	b _0809B7DC
	.byte 0x00
	.byte 0x00
_0809B74C:
	.4byte 0x00001794
_0809B750:
	.4byte gUnknown_08167FBE
_0809B754:
	.4byte 0x00001793
_0809B758:
	.4byte gRam
_0809B75C:
	.4byte 0x000016D5
_0809B760:
	.4byte 0x00001791
_0809B764:
	.4byte 0x00001705
_0809B768:
	.4byte 0x00001718
_0809B76C:
	bl sub_08099C30
	ldr r2, _0809B7C0  @ =gRam
	ldr r0, _0809B7C4  @ =0x00001727
	add r3, r2, r0
	ldrb r0, [r3]
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _0809B786
	ldr r4, _0809B7C8  @ =0x000016CE
	add r0, r2, r4
	strb r1, [r0]
_0809B786:
	ldrb r0, [r3]
	mov r1, #12
	and r1, r1, r0
	cmp r1, #0
	bne _0809B796
	ldr r7, _0809B7CC  @ =0x000016CD
	add r0, r2, r7
	strb r1, [r0]
_0809B796:
	bl sub_080978AC
_0809B79A:
	bl sub_0809407C
	ldr r1, _0809B7C0  @ =gRam
	ldr r2, _0809B7D0  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809B7DC
	ldr r3, _0809B7D4  @ =0x0000172C
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809B7D8
	bl sub_0809B0DC
	b _0809B7DC
	.byte 0x00
	.byte 0x00
_0809B7C0:
	.4byte gRam
_0809B7C4:
	.4byte 0x00001727
_0809B7C8:
	.4byte 0x000016CE
_0809B7CC:
	.4byte 0x000016CD
_0809B7D0:
	.4byte 0x000009B2
_0809B7D4:
	.4byte 0x0000172C
_0809B7D8:
	bl sub_0809B2AC
_0809B7DC:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809B58C

	.byte 0x00
	.byte 0x00
