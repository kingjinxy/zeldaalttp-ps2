	THUMB_FUNC_START sub_0809D5CC
sub_0809D5CC: @ 0x0809D5CC
	push {r4-r7,lr}
	ldr r4, _0809D608  @ =gRam
	ldr r0, _0809D60C  @ =0x000009B2
	add r7, r4, r0
	mov r0, #0
	ldrsb r0, [r7, r0]
	cmp r0, #0
	bne _0809D5E0
	bl sub_0808B1FC
_0809D5E0:
	ldr r2, _0809D610  @ =0x00001811
	add r1, r4, r2
	mov r0, #0
	strb r0, [r1]
	bl sub_08098778
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _0809D5F6
	b _0809D9D0
_0809D5F6:
	ldr r5, _0809D614  @ =0x00001718
	add r6, r4, r5
	ldrb r0, [r6]
	cmp r0, #23
	bne _0809D618
	bl sub_08098950
	b _0809D9D0
	.byte 0x00
	.byte 0x00
_0809D608:
	.4byte gRam
_0809D60C:
	.4byte 0x000009B2
_0809D610:
	.4byte 0x00001811
_0809D614:
	.4byte 0x00001718
_0809D618:
	ldr r2, _0809D630  @ =0x0000174F
	add r0, r4, r2
	strb r1, [r0]
	ldr r5, _0809D634  @ =0x00001702
	add r0, r4, r5
	ldrb r2, [r0]
	cmp r2, #0
	beq _0809D638
	bl sub_0809D478
	b _0809D9D0
	.byte 0x00
	.byte 0x00
_0809D630:
	.4byte 0x0000174F
_0809D634:
	.4byte 0x00001702
_0809D638:
	ldr r0, _0809D6DC  @ =0x000016C8
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
	ldr r5, _0809D6E0  @ =0x000016C9
	add r1, r4, r5
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r0, _0809D6E4  @ =0x000016CF
	add r1, r4, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r1, _0809D6E8  @ =0x0000174B
	add r0, r4, r1
	strb r2, [r0]
	bl sub_080A185C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	beq _0809D708
	mov r0, #0
	bl sub_080A18F0
	ldr r2, _0809D6EC  @ =0x00001791
	add r0, r4, r2
	ldr r5, _0809D6F0  @ =0x00001808
	add r1, r4, r5
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _0809D708
	ldr r1, _0809D6F4  @ =0x00001809
	add r0, r4, r1
	ldrb r5, [r0]
	cmp r5, #0
	bne _0809D708
	ldrb r0, [r6]
	cmp r0, #17
	beq _0809D708
	bl sub_080A3BEC
	ldr r2, _0809D6F8  @ =0x0000165E
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D708
	ldr r0, _0809D6FC  @ =gSword
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D708
	bl sub_080A3D38
	ldrb r0, [r6]
	cmp r0, #3
	bne _0809D708
	ldr r1, _0809D700  @ =0x000016D6
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809D704  @ =0x000016D7
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #181
	add r0, r4, r1
	strb r5, [r0]
	mov r0, #0
	ldrsb r0, [r7, r0]
	cmp r0, #0
	bne _0809D6CA
	b _0809D9D0
_0809D6CA:
	add r2, r2, #85
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D6D6
	b _0809D996
_0809D6D6:
	bl sub_0809B2AC
	b _0809D9D0
_0809D6DC:
	.4byte 0x000016C8
_0809D6E0:
	.4byte 0x000016C9
_0809D6E4:
	.4byte 0x000016CF
_0809D6E8:
	.4byte 0x0000174B
_0809D6EC:
	.4byte 0x00001791
_0809D6F0:
	.4byte 0x00001808
_0809D6F4:
	.4byte 0x00001809
_0809D6F8:
	.4byte 0x0000165E
_0809D6FC:
	.4byte gSword
_0809D700:
	.4byte 0x000016D6
_0809D704:
	.4byte 0x000016D7
_0809D708:
	bl sub_080A3E40
	ldr r4, _0809D774  @ =gRam
	ldr r5, _0809D778  @ =0x000016F8
	add r0, r4, r5
	ldrb r1, [r0]
	cmp r1, #0
	beq _0809D794
	ldr r0, _0809D77C  @ =0x0000172B
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0809D726
	mov r0, #0
	strb r0, [r1]
_0809D726:
	ldr r1, _0809D780  @ =0x00001796
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _0809D784  @ =0x00001797
	add r0, r4, r2
	strb r1, [r0]
	ldr r5, _0809D788  @ =0x00001793
	add r0, r4, r5
	strb r1, [r0]
	sub r2, r2, #174
	add r0, r4, r2
	strb r1, [r0]
	sub r5, r5, #1
	add r0, r4, r5
	strb r1, [r0]
	add r2, r2, #168
	add r0, r4, r2
	strb r1, [r0]
	add r5, r5, #118
	add r0, r4, r5
	strb r1, [r0]
	ldr r1, _0809D78C  @ =0x000016E8
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0809D76C
	ldr r5, _0809D790  @ =0x00001705
	add r2, r4, r5
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_0809D76C:
	mov r0, #0
	bl sub_08099D98
	b _0809D9D0
_0809D774:
	.4byte gRam
_0809D778:
	.4byte 0x000016F8
_0809D77C:
	.4byte 0x0000172B
_0809D780:
	.4byte 0x00001796
_0809D784:
	.4byte 0x00001797
_0809D788:
	.4byte 0x00001793
_0809D78C:
	.4byte 0x000016E8
_0809D790:
	.4byte 0x00001705
_0809D794:
	ldr r2, _0809D7A8  @ =0x00001809
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D7B0
	ldr r5, _0809D7AC  @ =0x00001727
	add r0, r4, r5
	strb r1, [r0]
	b _0809D92E
	.byte 0x00
	.byte 0x00
_0809D7A8:
	.4byte 0x00001809
_0809D7AC:
	.4byte 0x00001727
_0809D7B0:
	ldr r1, _0809D848  @ =0x0000176D
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D7BC
	b _0809D92E
_0809D7BC:
	ldr r2, _0809D84C  @ =0x00001808
	add r5, r4, r2
	ldrb r1, [r5]
	mov r0, #253
	and r0, r0, r1
	cmp r0, #0
	beq _0809D7CC
	b _0809D92E
_0809D7CC:
	ldr r1, _0809D850  @ =0x00001791
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #0
	beq _0809D7DC
	b _0809D92E
_0809D7DC:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0809D7F4
	sub r2, r2, #118
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0809D7F4
	b _0809D92E
_0809D7F4:
	ldr r1, _0809D854  @ =0x0000178A
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D800
	b _0809D92E
_0809D800:
	ldr r2, _0809D858  @ =0x0000180C
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D80C
	b _0809D92E
_0809D80C:
	sub r1, r1, #160
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #8
	bhi _0809D826
	ldr r2, _0809D85C  @ =0x000016E8
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #160
	and r0, r0, r1
	cmp r0, #128
	bne _0809D826
	b _0809D92E
_0809D826:
	ldr r1, _0809D860  @ =0x000017DA
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D86C
	ldr r2, _0809D864  @ =0x000017C2
	add r0, r4, r2
	mov r1, #192
	lsl r1, r1, #1
	strh r1, [r0]
	ldr r5, _0809D868  @ =0x000017C4
	add r0, r4, r5
	strh r1, [r0]
	bl sub_080981D0
	b _0809D9D0
	.byte 0x00
	.byte 0x00
_0809D848:
	.4byte 0x0000176D
_0809D84C:
	.4byte 0x00001808
_0809D850:
	.4byte 0x00001791
_0809D854:
	.4byte 0x0000178A
_0809D858:
	.4byte 0x0000180C
_0809D85C:
	.4byte 0x000016E8
_0809D860:
	.4byte 0x000017DA
_0809D864:
	.4byte 0x000017C2
_0809D868:
	.4byte 0x000017C4
_0809D86C:
	bl sub_08092B0C
	ldr r1, _0809D8D4  @ =0x000016FC
	add r0, r4, r1
	ldrh r0, [r0]
	mov r3, #15
	add r2, r3, #0
	and r2, r2, r0
	cmp r0, #0
	bne _0809D8F0
	ldrb r1, [r5]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _0809D92E
	ldr r2, _0809D8D8  @ =0x00000545
	add r0, r4, r2
	ldrb r0, [r0]
	add r2, r3, #0
	and r2, r2, r0
	cmp r2, #0
	bne _0809D8F0
	ldr r5, _0809D8DC  @ =0x000016D6
	add r0, r4, r5
	strb r2, [r0]
	ldr r1, _0809D8E0  @ =0x000016D7
	add r0, r4, r1
	strb r2, [r0]
	add r5, r5, #81
	add r0, r4, r5
	strb r2, [r0]
	sub r1, r1, #11
	add r0, r4, r1
	strb r2, [r0]
	sub r5, r5, #83
	add r0, r4, r5
	strb r2, [r0]
	ldr r0, _0809D8E4  @ =0x000016FA
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _0809D8E8  @ =0x00001803
	add r1, r4, r2
	mov r0, #32
	strb r0, [r1]
	ldr r5, _0809D8EC  @ =0x00001807
	add r1, r4, r5
	mov r0, #19
	strb r0, [r1]
	b _0809D92E
_0809D8D4:
	.4byte 0x000016FC
_0809D8D8:
	.4byte 0x00000545
_0809D8DC:
	.4byte 0x000016D6
_0809D8E0:
	.4byte 0x000016D7
_0809D8E4:
	.4byte 0x000016FA
_0809D8E8:
	.4byte 0x00001803
_0809D8EC:
	.4byte 0x00001807
_0809D8F0:
	ldr r3, _0809D99C  @ =gRam
	ldr r1, _0809D9A0  @ =0x00001727
	add r0, r3, r1
	mov r1, #0
	strb r2, [r0]
	ldr r5, _0809D9A4  @ =0x000016CC
	add r4, r3, r5
	ldrb r0, [r4]
	cmp r2, r0
	beq _0809D92C
	ldr r5, _0809D9A8  @ =0x000016D0
	add r0, r3, r5
	strb r1, [r0]
	add r5, r5, #1
	add r0, r3, r5
	strb r1, [r0]
	add r5, r5, #90
	add r0, r3, r5
	strb r1, [r0]
	sub r5, r5, #49
	add r0, r3, r5
	strb r1, [r0]
	ldr r0, _0809D9AC  @ =0x00001803
	add r1, r3, r0
	mov r0, #32
	strb r0, [r1]
	ldr r5, _0809D9B0  @ =0x00001807
	add r1, r3, r5
	mov r0, #19
	strb r0, [r1]
_0809D92C:
	strb r2, [r4]
_0809D92E:
	bl sub_080943CC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0809D942
	bl sub_0809380C
	bl sub_08094460
_0809D942:
	ldr r4, _0809D99C  @ =gRam
	ldr r0, _0809D9A0  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	mov r5, #0
	strb r0, [r2]
	bl sub_0809380C
	bl sub_080975B4
	bl sub_0809407C
	bl sub_08096F30
	ldr r1, _0809D9B4  @ =0x00001809
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D978
	ldr r2, _0809D9B8  @ =0x000016D6
	add r0, r4, r2
	strb r5, [r0]
	ldr r1, _0809D9BC  @ =0x000016D7
	add r0, r4, r1
	strb r5, [r0]
_0809D978:
	ldr r2, _0809D9C0  @ =0x0000178B
	add r0, r4, r2
	strb r5, [r0]
	ldr r5, _0809D9C4  @ =0x000009B2
	add r0, r4, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809D9D0
	ldr r1, _0809D9C8  @ =0x0000172C
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D9CC
_0809D996:
	bl sub_0809B0DC
	b _0809D9D0
_0809D99C:
	.4byte gRam
_0809D9A0:
	.4byte 0x00001727
_0809D9A4:
	.4byte 0x000016CC
_0809D9A8:
	.4byte 0x000016D0
_0809D9AC:
	.4byte 0x00001803
_0809D9B0:
	.4byte 0x00001807
_0809D9B4:
	.4byte 0x00001809
_0809D9B8:
	.4byte 0x000016D6
_0809D9BC:
	.4byte 0x000016D7
_0809D9C0:
	.4byte 0x0000178B
_0809D9C4:
	.4byte 0x000009B2
_0809D9C8:
	.4byte 0x0000172C
_0809D9CC:
	bl sub_0809B2AC
_0809D9D0:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809D5CC

	.byte 0x00
	.byte 0x00
